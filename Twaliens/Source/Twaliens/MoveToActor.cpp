// All rights reserved.

#include "MoveToActor.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UMoveToActor::UMoveToActor()
{
	AIControllerReference = nullptr;
	ForceInstancing(true);
}

void UMoveToActor::OnGameplayTaskActivated(UGameplayTask & Task)
{
}

EBTNodeResult::Type UMoveToActor::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	UBlackboardComponent * blackboard = OwnerComp.GetBlackboardComponent();
	UBehaviorTree * BT = OwnerComp.GetCurrentTree();
	
	AActor * target = Cast<AActor>(blackboard->GetValueAsObject(TargetToFollow.SelectedKeyName));
	
	if(!AIControllerReference)
	{
		AIControllerReference = OwnerComp.GetAIOwner();
	}
	
	AIControllerReference->MoveToActor(target, AcceptanceRadius, StopOnOverlap, true, CanStrafe, 0, true);
	return EBTNodeResult::Succeeded;
}