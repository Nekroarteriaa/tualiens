// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Dustpan.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorHasBeenSucked, AActor *, SuckedActor);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TWALIENS_API UDustpan : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDustpan();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component Settings")
	class USphereComponent * SuckArea;

	TArray<AActor*> ActorsInArea;
	TArray<AActor*> ActorsSuckedInArea;

	FScriptDelegate OverlapEnterDelegate, OverlapExitDelegate;

	FActorHasBeenSucked OnActorHasBeenSucked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component Settings")
	float SuckVelocity = 500;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component Settings")
	float SuckedDistance = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component Settings")
	float SuckRadio = 250;

	//Distance enemy is pushed away
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component Settings")
		float PushDistance;

	//Distance when Dustpan can start push
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component Settings")
		float PushDistanceStart;

	UFUNCTION()
	void OnObjectEnterToArea(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void OnObjectExitToArea(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Add a function to delegate that broadcast whenever actor dies.
	void AddDelegateToSuck(const FScriptDelegate & Delegate);

	//Remove a function from life changes delegate.
	void RemoveDelegateFromSuck(const FScriptDelegate & Delegate);

	//Clear all functions from life changes delegate.
	void RemoveAllDelegatesFromSuck();

	UFUNCTION()
	void Suck();
};
