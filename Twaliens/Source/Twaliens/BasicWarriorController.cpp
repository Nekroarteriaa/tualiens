// All rights reserved.

#include "BasicWarriorController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/CoreUObject/Public/UObject/UObjectGlobals.h"

ABasicWarriorController::ABasicWarriorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	BlackboardData = nullptr;
	BehaviourTree = nullptr;

	ConstructorHelpers::FObjectFinder<UBehaviorTree> BTFinder(TEXT("/Game/AI/BasicWarrior/BT_BasicWarriorBehaviourTree_0.BT_BasicWarriorBehaviourTree_0"));
	ConstructorHelpers::FObjectFinder<UBlackboardData> BBFinder(TEXT("/Game/AI/BasicWarrior/BB_BasicWarriorBlackboard_0.BB_BasicWarriorBlackboard_0"));
	
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("Blackboard");
	
	if (BTFinder.Succeeded() && BBFinder.Succeeded())
	{
		BlackboardData = BBFinder.Object;
		BehaviourTree = BTFinder.Object;
	}
}

// Called when the game starts or when spawned
void ABasicWarriorController::BeginPlay()
{ 
	Super::BeginPlay();

	UseBlackboard(BlackboardData, Blackboard);
	Blackboard->SetValueAsBool("Awaiting?", true);
	RunBehaviorTree(BehaviourTree);
}

void ABasicWarriorController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

}