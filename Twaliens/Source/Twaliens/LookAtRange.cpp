// All rights reserved.

#include "LookAtRange.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Twalien.h"

ULookAtRange::ULookAtRange()
{
	ForceInstancing(true);
}

void ULookAtRange::OnGameplayTaskActivated(UGameplayTask & Task)
{

}

void ULookAtRange::OnGameplayTaskDeactivated(UGameplayTask & Task)
{

}

void ULookAtRange::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	UBlackboardComponent * Blackboard;
	bool isAwaiting;
	
	//Assign AIController
	if(!AIControllerReference)
	{
		AIControllerReference = OwnerComp.GetAIOwner();
	}

	////Check if we already get a target
	Blackboard = OwnerComp.GetBlackboardComponent();
	isAwaiting = Blackboard->GetValueAsBool(AwaitingKey.SelectedKeyName);
	
	
	if(isAwaiting)
	{
		FVector AgentPosition;
		FQuat AgentQuaternion;
		FCollisionObjectQueryParams QueryParams;
		FCollisionShape Shape;
		UWorld * world;
		TArray<FOverlapResult> OverlapResult;
		ATwalien * HitActor;

		world = GetWorld();

		AgentPosition = OwnerComp.GetOwner()->GetActorLocation();
		AgentQuaternion = OwnerComp.GetOwner()->GetActorRotation().Quaternion();
		QueryParams.AddObjectTypesToQuery(ECollisionChannel::ECC_Pawn);

		world->OverlapMultiByObjectType(OverlapResult, AgentPosition, AgentQuaternion, QueryParams, Shape.MakeSphere(SightDistance));

		for(FOverlapResult Result : OverlapResult)
		{
			HitActor = nullptr;
			HitActor = Cast<ATwalien>(Result.Actor);
			if(HitActor)
			{
				Blackboard->SetValueAsObject(TargetKey.SelectedKeyName, HitActor);
				Blackboard->SetValueAsVector(TargetLocationKey.SelectedKeyName, HitActor->GetActorLocation());
				Blackboard->SetValueAsBool(AwaitingKey.SelectedKeyName, false);
				break;
			}
		}
	}
}