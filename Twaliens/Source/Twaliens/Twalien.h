// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Twalien.generated.h"

DECLARE_DYNAMIC_DELEGATE(FTwalienFireAction);

UCLASS()
class TWALIENS_API ATwalien : public ACharacter
{
	GENERATED_BODY()

private:
	float RespawnCountdown;

	//Validate if the player can respawn
	bool IsSpawnable;

public:
	// Sets default values for this character's properties
	ATwalien();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Called when game ends
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	/*************************************************************/
	//						DATA MEMBERS
	/*************************************************************/
	
	//Rotation Delta
	UPROPERTY(EditAnywhere, Category = "Player Settings")
	float DeltaYawRotation = 1.f;

	//Player's Score
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Settings")
	float Score;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Settings")
	class ULifeComponent * HPComponent;

	//Player's weapon
	UPROPERTY(VisibleDefaultsOnly, Category = "Player Settings")
	USkeletalMeshComponent* WeaponSkeletor;

	//Validate if payer has died
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Settings")
		bool IsDead;

	//Validate if payer has died
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Settings")
		USceneComponent* WeaponType;

	FTwalienFireAction FireDelegate;

	//FScriptDelegate delegate;
	/*************************************************************/
	//					  FUNCTION MEMBERS
	/*************************************************************/

	//Called every frame for forward movement
	UFUNCTION()
	void MoveForward(float value);

	//Called every frame for rotation
	UFUNCTION()
	void Rotate(float value);

	UFUNCTION()
	void Fire(float value);


public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AddDelegateToFire(UObject * InObject, const FName & FunctionName);

	void ClearDelegateOfFire();

	void SetTwalienWeapon(class USceneComponent * Weapon);

	USceneComponent* GetTwalienWeapon();

	//Know if the player is dead
	bool GetIsDead();

	//Set the dead state of the player
	UFUNCTION()
		void SetIsDead(bool Dead);
		
	void SetRespawnCountdown(float CountTimer);


	float GetRespawnCountdown();

	//Know if the player is spawnable
	bool GetIsSpawnable();

	//Set the spawn state of the player
	UFUNCTION()
		void SetIsSpawnable(bool Spawn);
};
