// All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerStart.h"
#include "TimerManager.h"
#include "Twalien.h"
#include "CharacterManager.generated.h"

UCLASS()
class TWALIENS_API ACharacterManager : public AActor
{
	GENERATED_BODY()

private:
	TSubclassOf<ATwalien> Player;
	FTimerHandle SwitchTimerHandle;
	APlayerStart* AStartPoints;
	bool ShouldSwitch = true;

public:
	// Sets default values for this character's properties
	ACharacterManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Settings")
	class UWeapon* ShootingGun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Settings")
	class UDustpan* SuckGun;

	UPROPERTY(VisibleAnywhere, category = "Settings")
		TArray<APlayerStart*> RespawnLocation;

	UPROPERTY(VisibleAnywhere, category = "Settings")
		TArray<ATwalien*> Players;

	//Time Player have to wait to respawn when dead
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Settings")
		float RespawnTime;

	//Time to wait before the weapons switch
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Settings")
		float SwitchTime;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Save the start points of the players
	void FindRespawnLocations();

	//Spawn the players
	void SpawnPlayers();

	//Switch the weapon between players
	void SwitchGun();

	//Disable the player
	UFUNCTION()
		void DisablePlayer(ATwalien* APlayer);

	//Enable the player
	void EnablePlayer(ATwalien* APlayer);
};
