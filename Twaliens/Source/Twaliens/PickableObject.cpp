// All rights reserved.

#include "PickableObject.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/Engine.h"
#include "LifeComponent.h"
#include "Twalien.h"
#include "Weapon.h"

// Sets default values
APickableObject::APickableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("Object Collider"));
	CollisionComp->SetupAttachment(RootComponent);
	CollisionComp->SetSphereRadius(60);

	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object Mesh"));
	ObjectMesh->SetupAttachment(CollisionComp);
	ObjectMesh->SetCollisionProfileName(FName("NoCollision"));

	AllowedTagsToInteract.Add(FName("Player"));

	RechargeAmmount = 0;
}

// Called when the game starts or when spawned
void APickableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickableObject::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	bool IsAllowed = false;

	for (int i = 0; i < OtherActor->Tags.Num() && !IsAllowed; i++)
	{
		IsAllowed = AllowedTagsToInteract.Contains(OtherActor->Tags[i]);
	}

	if (IsAllowed)
	{
		

		switch (ObjectType)
		{
		case EObjectType::Type_Health:		

			UActorComponent* component;
			component = nullptr;
			component = OtherActor->GetComponentByClass(ULifeComponent::StaticClass());

			if (component)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("Health Recharge"));
				class ULifeComponent* life;
				life = Cast<ULifeComponent>(component);
				life->SetHitPoints(RechargeAmmount);
			}

			break;

		case EObjectType::Type_Ammunition:

			class UWeapon* Gun = Cast<UWeapon>(Cast<ATwalien>(OtherActor)->GetTwalienWeapon());

			if (Gun)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("Ammunition Recharge"));
				Gun->SetAmmunition(round(RechargeAmmount));
				//life = Cast<ULifeComponent>(component);
				//life->SetHitPoints(RechargeAmmount);
			}

			break;
		}

		this->Destroy();
	}
}

