// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "BasicWarrior.generated.h"

UCLASS()
class TWALIENS_API ABasicWarrior : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABasicWarrior();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Settings")
	class ULifeComponent * HPComponent;

	UPROPERTY(EditAnywhere, Category = "Player Settings")
		float damage = 20;

	UPROPERTY(EditAnywhere, Category = "Player Settings")
	class USphereComponent * PunchTrigger;

	FScriptDelegate delegate;

	bool IsAttacking;

	FScriptDelegate PunchOverlapDelegate;

	UFUNCTION()
	void OnPunchBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void SpawnCoins();

	UFUNCTION(BlueprintCallable)
	bool GetIsAttacking();

	UFUNCTION(BlueprintCallable)
	void SetIsAttacking(bool NewAttackState);

	UFUNCTION(BlueprintCallable)
	void ActivatePunchDamage();

	UFUNCTION(BlueprintCallable)
	void DeactivatePunchDamage();

private:
	TSubclassOf<AActor> spaceCoins;
};
