
// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ProjectileA.h"
#include "Weapon.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TWALIENS_API UWeapon : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UWeapon();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Projectile class to spawn.
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<AProjectileA> ProjectileClass;

	//Amunnition
	UPROPERTY(EditAnywhere, Category = "Projectile")
		int Ammunition;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void Fire();

	void SetProjectileClass(TSubclassOf<AProjectileA> NewProjectileClass);

	void SetAmmunition(int AmmunutionAmount);
};
