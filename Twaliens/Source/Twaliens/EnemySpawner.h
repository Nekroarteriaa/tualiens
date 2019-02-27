#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicWarrior.h"
#include "EnemySpawner.generated.h"


UCLASS()
class TWALIENS_API AEnemySpawner : public AActor
{
	GENERATED_BODY()

private:
	FTimerHandle SpawnTimerHandle;

public:
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Spawner Settings")
		float SpawnTime;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TSubclassOf<ABasicWarrior> EnemyToSpawn;

	/*UPROPERTY(EditDefaultsOnly, Category = Default)
		UStaticMeshComponent* Meshcomp;*/
	UPROPERTY(EditDefaultsOnly, Category = Default)
		class UBoxComponent* SpawnVolume;

	UFUNCTION(BlueprintCallable)
		void SpawnEnemy();

	int activeEnmies;

};

