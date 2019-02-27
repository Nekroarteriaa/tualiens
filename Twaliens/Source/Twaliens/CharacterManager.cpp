// All rights reserved.

#include "CharacterManager.h"
#include "ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Public/EngineUtils.h"
#include "Engine/Engine.h"
#include "Twalien.h"
#include "Weapon.h"
#include "Dustpan.h"

// Sets default values
ACharacterManager::ACharacterManager()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	PrimaryActorTick.bCanEverTick = true;
	
	//TODO - ver los estaticos estos
	ConstructorHelpers::FClassFinder<APawn> TWalien(TEXT("/Game/Characters/Player/BP_Twalien_0"));

	ShootingGun = CreateDefaultSubobject<UWeapon>(TEXT("ShootingGunComponent"));

	//ShootingGun->SetProjectileClass(Projectile.Class);

	SuckGun = CreateDefaultSubobject<UDustpan>(TEXT("SuckGunComponent"));

	Player = TWalien.Class;

	FindRespawnLocations();
}

// Called when the game starts or when spawned
void ACharacterManager::BeginPlay()
{
	Super::BeginPlay();

	SpawnPlayers();

	GetWorldTimerManager().SetTimer(SwitchTimerHandle, this, &ACharacterManager::SwitchGun, SwitchTime, true, SwitchTime);

}

// Called every frame
void ACharacterManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Players[0]->GetIsDead())
	{
		if (Players[0]->GetRespawnCountdown() == RespawnTime)
		{
			DisablePlayer(Players[0]);
			Players[0]->SetRespawnCountdown(-1 * DeltaTime);
		}
		else
		{
			Players[0]->SetRespawnCountdown(-1 * DeltaTime);
		}

		if (Players[0]->GetRespawnCountdown() <= 0.0f)
		{
			EnablePlayer(Players[0]);
			Players[0]->SetRespawnCountdown(RespawnTime);
			Players[0]->SetIsDead(false);
		}
	}

	if (Players[1]->GetIsDead())
	{
		if (Players[1]->GetRespawnCountdown() == RespawnTime)
		{
			DisablePlayer(Players[1]);
			Players[1]->SetRespawnCountdown(-1 * DeltaTime);
		}
		else
		{
			Players[1]->SetRespawnCountdown(-1 * DeltaTime);
		}

		if (Players[1]->GetRespawnCountdown() <= 0.0f)
		{
			EnablePlayer(Players[1]);
			Players[1]->SetRespawnCountdown(RespawnTime);
			Players[1]->SetIsDead(false);
		}
	}
}

void ACharacterManager::FindRespawnLocations()
{
	class UWorld* const world = GetWorld();
	int32 i = 0;

	if (world)
	{
		for (TActorIterator<APlayerStart> Itr(world); Itr; ++Itr)
		{
			APlayerStart* FoundPoint = *Itr;

			if (FoundPoint != nullptr)
			{
				if (FoundPoint->PlayerStartTag == FName(*FString::FromInt(i)))
				{

					if (AStartPoints != FoundPoint)
					{
						AStartPoints = FoundPoint;

						// Once the location is found, add it to array
						RespawnLocation.Add(AStartPoints);
					}
				}
			}
			++i;
		}
	}
}

void ACharacterManager::SpawnPlayers()
{
	class UWorld* const world = GetWorld();
	int MaxPlayerCount;

	MaxPlayerCount = RespawnLocation.Num();

	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	for (int i = 0; i < MaxPlayerCount; ++i)
	{
		//Initializing player and playercontroller
		APlayerController* NewPlayerController = Cast<APlayerController>(UGameplayStatics::CreatePlayer(world, i));
		ATwalien* ResultPawn = world->SpawnActor<ATwalien>(Player, RespawnLocation[i]->GetActorLocation(), RespawnLocation[i]->GetActorRotation(), spawnParams);

		//Moving player to start location
		ResultPawn->SetActorTransform(RespawnLocation[i]->GetActorTransform());

		//Possessing player
		UGameplayStatics::GetPlayerController(GetWorld(), i)->Possess(ResultPawn);
		
		//Saving player in TArray
		Players.Add(ResultPawn);

		//Assign player its weapon component
		if (i == 0)
		{
			ResultPawn->SetTwalienWeapon(SuckGun);
			SuckGun->AddRelativeLocation(FVector(0, 55, 10));
			ResultPawn->AddDelegateToFire(SuckGun, FName("Suck"));
			ResultPawn->SetRespawnCountdown(RespawnTime);
		}
		else if(i == 1)
		{
			ResultPawn->SetTwalienWeapon(ShootingGun);
			ShootingGun->AddRelativeLocation(FVector(0, 55, 10));
			ResultPawn->AddDelegateToFire(ShootingGun, FName("Fire"));
			ResultPawn->SetRespawnCountdown(RespawnTime);
		}
	}
}

void ACharacterManager::SwitchGun()
{
	ShouldSwitch = !ShouldSwitch;

	if (!ShouldSwitch)
	{
		Players[0]->ClearDelegateOfFire();
		Players[0]->SetTwalienWeapon(ShootingGun);
		Players[0]->AddDelegateToFire(ShootingGun, FName("Fire"));

		Players[1]->ClearDelegateOfFire();
		Players[1]->SetTwalienWeapon(SuckGun);
		Players[1]->AddDelegateToFire(SuckGun, FName("Suck"));
	}

	if (ShouldSwitch)
	{
		Players[0]->ClearDelegateOfFire();
		Players[0]->SetTwalienWeapon(SuckGun);
		Players[0]->AddDelegateToFire(SuckGun, FName("Suck"));

		Players[1]->ClearDelegateOfFire();
		Players[1]->SetTwalienWeapon(ShootingGun);
		Players[1]->AddDelegateToFire(ShootingGun, FName("Fire"));
	}

}

void ACharacterManager::DisablePlayer(ATwalien* APlayer)
{
	APlayer->SetActorEnableCollision(false);
	APlayer->SetActorHiddenInGame(true);
	APlayer->DisableInput(APlayer->GetController()->CastToPlayerController());
	//this->UnPossessed();
	APlayer->SetIsSpawnable(true);
	APlayer->SetIsDead(true);
}

void ACharacterManager::EnablePlayer(ATwalien* APlayer)
{
	if (APlayer->GetIsSpawnable())
	{
		APlayer->SetActorEnableCollision(true);
		APlayer->SetActorHiddenInGame(false);
		APlayer->EnableInput(APlayer->GetController()->CastToPlayerController());
		//PController->Possess(this);
		/*HPComponent->ResetHitPoints();*/
	}
	APlayer->SetIsSpawnable(false);
}