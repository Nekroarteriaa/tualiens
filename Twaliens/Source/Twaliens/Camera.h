// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera.generated.h"



class UCameraComponent;
class USpringArmComponent;
class UStaticMeshComponent;

UCLASS()
class TWALIENS_API ACamera : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void InterpolatingCameraPosition(const APawn* Player, const int& PlayerIndex, float DeltaTime, const float& distance);
	FVector GetAverageLocationBetweenPlayers();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, category = "Settings")
		TArray<APawn*> Players;

	UPROPERTY(EditAnywhere, category = "Settings")
		UCameraComponent* CameraComponnt;


	UPROPERTY(EditAnywhere, category = "Settings")
		USpringArmComponent* SpringArmComponnt;

	UPROPERTY(EditAnywhere, category = "Settings")
		float TrgtArmLength;

	UPROPERTY(EditAnywhere, category = "Settings")
		UStaticMeshComponent* StaticMeshComponnt;

	UPROPERTY(EditAnywhere, category = "Settings")
		FRotator RotationAngles;

	/*UPROPERTY(EditAnywhere, category = "Settings")
		float MinDistanceBetweenPlayers = 100.f;*/

	UPROPERTY(EditAnywhere, category = "Settings")
		float MinDistanceTrgtArmLength = 700.f;

	UPROPERTY(EditAnywhere, category = "Settings")
		float MaxDistanceTrgtArmLength = 1800.f;

	UPROPERTY(EditAnywhere, category = "Settings")
		bool ActivateFollowAverage;

};
