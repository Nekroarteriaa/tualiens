// All rights reserved.

#include "Twalien.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Engine/World.h"
#include "Weapon.h"
#include "LifeComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ATwalien::ATwalien()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//We initialize Weapon creating a skeletal mesh component and attaching it to player mesh
	//TODO - We must choose mesh socket for this attachment!!!. a$tuR
	WeaponSkeletor = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	WeaponSkeletor->SetupAttachment(GetMesh());

	//Life component
	HPComponent = CreateDefaultSubobject<ULifeComponent>("LifeComponent");
	AddOwnedComponent(HPComponent);

	//Initialize Data Members
	Score = 0;
	IsDead = false;
	IsSpawnable = false;
	RespawnCountdown = 0.0f;
}

// Called when the game starts or when spawned
void ATwalien::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATwalien::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(HPComponent->GetHitPoints() <= 0.0f)
	{
		IsDead = true;
		HPComponent->ResetHitPoints();
	}
}

void ATwalien::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	//delegate.Unbind();
	//HPComponent->RemoveDelegateFromDeath(delegate);
	HPComponent->UnregisterComponent();
	HPComponent->DestroyComponent();
}

// Called to bind functionality to input
void ATwalien::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &ATwalien::MoveForward);
	PlayerInputComponent->BindAxis("Rotate", this, &ATwalien::Rotate);
	PlayerInputComponent->BindAxis("Fire", this, &ATwalien::Fire);
}

//Called every frame for forward movement
void ATwalien::MoveForward(float value)
{
	if(!FMath::IsNearlyZero(value))
	{
		AddMovementInput(GetActorForwardVector(), value);
	}
}

//Called every frame for rotation
void ATwalien::Rotate(float value)
{
	if(!FMath::IsNearlyZero(value))
	{
		AddControllerYawInput(value * DeltaYawRotation * GetWorld()->GetDeltaSeconds());
	}
}

//Called every frame for weapon action check
void ATwalien::Fire(float value)
{
	//If button is almost pressed
	if(value > 0.8)
		FireDelegate.ExecuteIfBound();
}

//Add a function to Weapon Action Delegate, only can be one at the same time.
//InObject -> Object that owns function.
//FunctionName -> Name of function.
void ATwalien::AddDelegateToFire(UObject * InObject, const FName & FunctionName)
{
	FireDelegate.BindUFunction(InObject, FunctionName);
}

//Clear the function binded to Weapon action delegate.
void ATwalien::ClearDelegateOfFire()
{
	FireDelegate.Clear();
}

//Attach the component Weapon to Player's weapon.
//Weapon -> Component that is attached to player's weapon.
void ATwalien::SetTwalienWeapon(USceneComponent* Weapon)
{
	Weapon->AttachTo(WeaponSkeletor);
	WeaponType = Weapon;
}

USceneComponent* ATwalien::GetTwalienWeapon()
{
	return WeaponType;
}

bool ATwalien::GetIsDead()
{
	return IsDead;
}

void ATwalien::SetIsDead(bool dead)
{
	IsDead = dead;
}

void ATwalien::SetRespawnCountdown(float CountTimer)
{
	if (RespawnCountdown < 0.0f)
	{
		RespawnCountdown = CountTimer;
	}
	else
	{
		RespawnCountdown += CountTimer;
	}
}

float ATwalien::GetRespawnCountdown()
{
	return RespawnCountdown;
}

bool ATwalien::GetIsSpawnable()
{
	return IsSpawnable;
}

void ATwalien::SetIsSpawnable(bool Spawn)
{
	IsSpawnable = Spawn;
}
