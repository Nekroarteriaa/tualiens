// All rights reserved.

#include "CheckEnemyAtMeleeRange.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"

UCheckEnemyAtMeleeRange::UCheckEnemyAtMeleeRange()
{
	ForceInstancing(true);
}

void UCheckEnemyAtMeleeRange::OnGameplayTaskActivated(UGameplayTask & Task)
{

}

void UCheckEnemyAtMeleeRange::OnGameplayTaskDeactivated(UGameplayTask & Task)
{

}

bool UCheckEnemyAtMeleeRange::CalculateRawConditionValue(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) const
{
	FVector TargetPosition, AgentPosition;
	UBlackboardComponent * blackboard;
	ACharacter * TargetActor;

	if (!AIControllerReference)
	{
		AIControllerReference = OwnerComp.GetAIOwner();
	}

	if (AIControllerReference->GetPawn())
	{
		float Distance;

		AgentPosition = AIControllerReference->GetPawn()->GetActorLocation();

		blackboard = OwnerComp.GetBlackboardComponent();
		TargetActor = Cast<ACharacter>(blackboard->GetValueAsObject(TargetKey.SelectedKeyName));

		TargetPosition = TargetActor->GetActorLocation();

		if (OverlapDistance)
		{
			ACharacter * agent;
			agent = Cast<ACharacter>(AIControllerReference->GetPawn());
			if (agent)
			{
				Distance = MeleeRange + TargetActor->GetCapsuleComponent()->GetScaledCapsuleRadius() + agent->GetCapsuleComponent()->GetScaledCapsuleRadius();
			}
		}
		else
		{
			Distance = MeleeRange;
		}

		return FVector::Dist(TargetPosition, AgentPosition) <= Distance;
	}
	else
		return false;
}