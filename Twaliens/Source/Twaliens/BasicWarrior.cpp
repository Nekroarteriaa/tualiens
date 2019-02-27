// All rights reserved.

#include "BasicWarrior.h"
#include "Engine/Engine.h"
#include "ConstructorHelpers.h"
#include "Runtime/Core/Public/Math/UnrealMathUtility.h"
#include "LifeComponent.h"
#include "AIController.h"

// Sets default values
ABasicWarrior::ABasicWarrior()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	static ConstructorHelpers::FClassFinder<AActor> Coins(TEXT("/Game/Characters/Objects/BP_Coins"));

	PrimaryActorTick.bCanEverTick = true;

	//Initializing components.	

	//HP Component
	HPComponent = CreateDefaultSubobject<ULifeComponent>("LifeComponent");
	AddOwnedComponent(HPComponent);

	//TODO - Remove the block below when we have coin spawn component. a$tuR
	//Adding our custom delegate to HP death delegate
	delegate.BindUFunction(this, FName("SpawnCoins"));
	HPComponent->AddDelegateToDeath(delegate);

	//Adding melee attack trigger
	PunchTrigger = CreateDefaultSubobject<USphereComponent>("LeftHandPunchTrigger");
	PunchTrigger->SetupAttachment(GetMesh(), FName("LeftHandSocket"));
	
	//Initializing data members.
	spaceCoins = Coins.Class;

	IsAttacking = false;

	PunchOverlapDelegate.BindUFunction(this, FName("OnPunchBeginOverlap"));
}

// Called when the game starts or when spawned
void ABasicWarrior::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicWarrior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicWarrior::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABasicWarrior::SpawnCoins()
{
	class UWorld* const world = GetWorld();
	FVector startLocation = this->GetActorLocation();
	FVector spawnLocation = startLocation;
	FActorSpawnParameters spawnParams;
	FRotator rotation = FRotator{ 0, 0, 0 };

	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	for (int i = 0; i <= 3; ++i)
	{
		spawnLocation.X = startLocation.X + FMath::RandRange(-130.0f, 130.0f);
		spawnLocation.Y = startLocation.Y + FMath::RandRange(-130.0f, 130.0f);
		rotation.Yaw = FMath::RandRange(0.0f, 180.0f);

		AActor* coins = world->SpawnActor<AActor>(spaceCoins, spawnLocation, rotation, spawnParams);

		//Pawn* ResultPawn = world->SpawnActor<APawn>(Player, RespawnLocation[i]->GetActorLocation(), RespawnLocation[i]->GetActorRotation(), spawnParams);
	}

	this->Controller->Destroy();
	this->Destroy();
}

void ABasicWarrior::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	//delegate.Unbind();
	HPComponent->RemoveDelegateFromDeath(delegate);
	HPComponent->UnregisterComponent();
	HPComponent->DestroyComponent();
}

bool ABasicWarrior::GetIsAttacking()
{
	return IsAttacking;
}

void ABasicWarrior::SetIsAttacking(bool NewAttackState)
{
	IsAttacking = NewAttackState;
}

void ABasicWarrior::ActivatePunchDamage()
{
	UE_LOG(LogTemp, Warning, TEXT("Activate"));
	PunchTrigger->OnComponentBeginOverlap.Add(PunchOverlapDelegate);
}

void ABasicWarrior::DeactivatePunchDamage()
{
	UE_LOG(LogTemp, Warning, TEXT("Deactivate"));
	PunchTrigger->OnComponentBeginOverlap.Remove(PunchOverlapDelegate);
}

void ABasicWarrior::OnPunchBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Puch overlap"));
	if(OtherActor->Tags.Contains("Player"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Punch hit player"));
		UActorComponent* component;
		component = nullptr;
		component = OtherActor->GetComponentByClass(ULifeComponent::StaticClass());
		if (component)
		{
			ULifeComponent* life;
			life = Cast<ULifeComponent>(component);
			life->SetHitPoints(-damage);
		}
	}
}