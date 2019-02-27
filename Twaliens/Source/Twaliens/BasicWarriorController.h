// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Runtime/Engine/Public/EngineUtils.h"
#include "Twalien.h"
#include "BasicWarriorController.generated.h"

/**
 *
 */
UCLASS()
class TWALIENS_API ABasicWarriorController : public AAIController
{
	GENERATED_BODY()

public:
	ABasicWarriorController(const class FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called once when actor its destroyed
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	class UBehaviorTree * BehaviourTree;
	class UBlackboardData * BlackboardData;
};