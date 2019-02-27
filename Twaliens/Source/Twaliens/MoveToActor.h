// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "MoveToActor.generated.h"

/**
 * 
 */
UCLASS()
class TWALIENS_API UMoveToActor : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UMoveToActor();

protected:
	virtual void OnGameplayTaskActivated(class UGameplayTask & Task) override;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blackboard key")
	FBlackboardKeySelector TargetToFollow;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task Property")
	float AcceptanceRadius = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task Property")
	bool StopOnOverlap = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task Property")
	bool CanStrafe = false;
	
	class AAIController * AIControllerReference;
};
