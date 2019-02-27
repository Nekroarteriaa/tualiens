// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "LookAtRange.generated.h"

/**
 * 
 */
UCLASS()
class TWALIENS_API ULookAtRange : public UBTService
{
	GENERATED_BODY()

public:

	ULookAtRange();
	virtual void OnGameplayTaskActivated(UGameplayTask & Task) override;
	virtual void OnGameplayTaskDeactivated(UGameplayTask & Task) override;

protected:

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blackboard key")
	FBlackboardKeySelector TargetKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blackboard key")
	FBlackboardKeySelector TargetLocationKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blackboard key")
	FBlackboardKeySelector AwaitingKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Service Property")
	float SightDistance;

	class AAIController * AIControllerReference;
};
