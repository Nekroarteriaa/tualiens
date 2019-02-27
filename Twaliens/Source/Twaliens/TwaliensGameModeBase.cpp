// Fill out your copyright notice in the Description page of Project Settings.

#include "TwaliensGameModeBase.h"
#include "Twalien.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/Engine/Public/EngineUtils.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"

ATwaliensGameModeBase::ATwaliensGameModeBase()
{
	//DefaultPawnClass = ATwalien::StaticClass();
	DefaultPawnClass = NULL;

}

void ATwaliensGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//FindRespawnLocations();
}
