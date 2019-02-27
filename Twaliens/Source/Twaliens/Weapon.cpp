// All rights reserved.

#include "Weapon.h"
#include "ProjectileA.h"
#include "ConstructorHelpers.h"

// Sets default values for this component's properties
UWeapon::UWeapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
	ConstructorHelpers::FClassFinder<AProjectileA> Projectile(TEXT("/Game/Weapons/BP_ProjectileA"));

	ProjectileClass = Projectile.Class;
}


// Called when the game starts
void UWeapon::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UWeapon::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWeapon::Fire()
{
	// Attempt to fire a projectile.
	if (ProjectileClass && Ammunition > 0)
	{
		UWorld* World = GetWorld();

		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = GetOwner();
			SpawnParams.Instigator = Cast<APawn>(GetOwner());
			
			// Spawn the projectile at the muzzle.
			AProjectileA* Projectile = World->SpawnActor<AProjectileA>(ProjectileClass, GetComponentLocation(), GetComponentRotation(), SpawnParams);
			if (Projectile)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = GetForwardVector();
				Projectile->FireInDirection(LaunchDirection);
				--Ammunition;
			}
		}
	}
}

void UWeapon::SetProjectileClass(TSubclassOf<AProjectileA> NewProjectileClass)
{
	ProjectileClass = NewProjectileClass;
}

void UWeapon::SetAmmunition(int AmmunutionAmount)
{
	Ammunition += AmmunutionAmount;
}