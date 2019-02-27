// Fill out your copyright notice in the Description page of Project Settings.

#include "Camera.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EngineUtils.h"
#include "Twalien.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

// Sets default values
ACamera::ACamera()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Creating components
	CameraComponnt = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	SpringArmComponnt = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	StaticMeshComponnt = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	//Setting components position
	RootComponent = StaticMeshComponnt;
	SpringArmComponnt->AttachTo(RootComponent);
	CameraComponnt->AttachTo(SpringArmComponnt, USpringArmComponent::SocketName);

	// Giving a camera distance
	TrgtArmLength = MinDistanceTrgtArmLength;
	SpringArmComponnt->TargetArmLength = TrgtArmLength;


}

// Called when the game starts or when spawned
void ACamera::BeginPlay()
{
	Super::BeginPlay();

	// Corresponding Angle for 3/4 camera vision
	SpringArmComponnt->SetWorldRotation(RotationAngles);

	// Adding players to Players array
	if (Players.Max() <= 0)
	{
		for (TActorIterator<ATwalien> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			APawn * CurrentMthfckr = *ActorItr;
			Players.Add(CurrentMthfckr);

		}
	}

	// Assigning CameraComponnt as Main Camera
	for (int i = 0; i < Players.Num(); ++i)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(Players[i], i);
		OurPlayerController->SetViewTarget(this);
	}

}




// Called every frame
void ACamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ActivateFollowAverage)
	{
		// Making the root stays on Players average location
		StaticMeshComponnt->SetRelativeLocation(GetAverageLocationBetweenPlayers());

		// Getting distances between each players and this object root
		float distance1 = FVector::Distance(Players[0]->GetActorLocation(), StaticMeshComponnt->GetComponentLocation());
		float distance2 = FVector::Distance(Players[1]->GetActorLocation(), StaticMeshComponnt->GetComponentLocation());

		InterpolatingCameraPosition(Players[0], 0, DeltaTime, distance1);
		InterpolatingCameraPosition(Players[1], 1, DeltaTime, distance2);
	}
	else
		return;

	

}

FVector ACamera::GetAverageLocationBetweenPlayers()
{
	FVector AverageVectorBetweenPlayers = Players[0]->GetActorLocation() + Players[1]->GetActorLocation();

	AverageVectorBetweenPlayers = AverageVectorBetweenPlayers / 2;

	return	AverageVectorBetweenPlayers;
}

void ACamera::InterpolatingCameraPosition(const APawn* Player, const int& PlayerIndex, float DeltaTime, const float& distance)
{
	FVector2D ScreenPositionCoord;
	const APlayerController* const PlayerController = UGameplayStatics::GetPlayerController(this, PlayerIndex);
	PlayerController->ProjectWorldLocationToScreen(Player->GetActorLocation(), ScreenPositionCoord, false);

	if (ScreenPositionCoord.X < 400.f && distance > 450.f ||
		ScreenPositionCoord.X > 1000.f && distance > 600.f ||
		ScreenPositionCoord.Y < 400.f && distance > 450.f ||
		ScreenPositionCoord.Y > 600.f && distance > 400.f)
	{
		TrgtArmLength = FMath::FInterpTo(TrgtArmLength, MaxDistanceTrgtArmLength, DeltaTime, .5f);
		SpringArmComponnt->TargetArmLength = TrgtArmLength;
	}

	else if (ScreenPositionCoord.X >= 400.f && distance < 450.f ||
		ScreenPositionCoord.X <= 1000.f && distance < 600.f ||
		ScreenPositionCoord.Y >= 400.f && distance < 450.f ||
		ScreenPositionCoord.Y <= 600.f && distance < 400.f)
	{
		TrgtArmLength = FMath::FInterpTo(TrgtArmLength, MinDistanceTrgtArmLength, DeltaTime, .5f);
		SpringArmComponnt->TargetArmLength = TrgtArmLength;
	}
}