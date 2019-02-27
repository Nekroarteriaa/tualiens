// All rights reserved.

#include "EnemySpawner.h"
#include "ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Public/EngineUtils.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Components/BoxComponent.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FClassFinder<ABasicWarrior> BasicWarrior(TEXT("/Game/Characters/BasicWarrior/BP_BasicWarrior_0"));

	EnemyToSpawn = BasicWarrior.Class;

	SpawnVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	//Meshcomp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	SpawnVolume->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &AEnemySpawner::SpawnEnemy, SpawnTime, true, 2.0f);
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemySpawner::SpawnEnemy() 
{
	UWorld* world = GetWorld();

	if (EnemyToSpawn) 
	{		
		if (world) 
		{

			FActorSpawnParameters spawnParams;
			spawnParams.Owner = this;
			FRotator rotator = this->GetActorRotation();
			FVector location = this->GetActorLocation() + (this->GetActorForwardVector() * 10);

			ABasicWarrior* Enemy = world->SpawnActor<ABasicWarrior>(EnemyToSpawn, location, rotator, spawnParams);

			if (Enemy)
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Spawnea"));
			else
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No spawnea"));
		}
	}
}