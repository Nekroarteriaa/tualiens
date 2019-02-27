// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LifeComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActorLifeHasBeenUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActorHasDied);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TWALIENS_API ULifeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	ULifeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/*************************************************************/
	//						DATA MEMBERS
	/*************************************************************/

	//Current hit points
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component settings")
		float HitPoints;

	//Max hit points amount
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component settings")
		float MaxAmountHitPoints = 100;

	//Delegate that broadcast whenever hit points changes.
	UPROPERTY(BlueprintAssignable, Category = "Component Settings")
		FActorLifeHasBeenUpdated OnLifeChanged;

	//Delegate that broadcast whenever actor dies.
	UPROPERTY(EditAnywhere, BlueprintAssignable, Category = "Component Settings")
		FActorHasDied OnActorDeath;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/*************************************************************/
	//					  FUNCTION MEMBERS
	/*************************************************************/

	UFUNCTION(BlueprintCallable, Category = "Component Functions")
		//Return Actor Hit Points.
		float GetHitPoints() const;

	UFUNCTION(BlueprintCallable, Category = "Component Functions")
		//Reset Actor Hit Points.
		void ResetHitPoints();

	UFUNCTION(BlueprintCallable, Category = "Component Functions")
		//Modify Actor Hit Points. 
		//DeltaHitPoints -> Hit Points added to Actor Hit Points.
		void SetHitPoints(float DeltaHitPoints);

	//Add a function to life changes delegate.
	void AddDelegateToHPUpdate(const FScriptDelegate & Delegate);

	//Add a function to delegate that broadcast whenever actor dies.
	void AddDelegateToDeath(const FScriptDelegate & Delegate);

	//Remove a function from life changes delegate.
	void RemoveDelegateFromHPUpdate(const FScriptDelegate & Delegate);

	//Clear all functions from life changes delegate.
	void RemoveAllDelegatesFromHPUpdate();

	//Remove a function from death delegate.
	void RemoveDelegateFromDeath(const FScriptDelegate & Delegate);

	//Clear all functions from death delegate.
	void RemoveAllDelegatesFromDeath();		
};
