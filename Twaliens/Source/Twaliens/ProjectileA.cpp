// All rights reserved.

#include "ProjectileA.h"
#include "Components/StaticMeshComponent.h"
#include "LifeComponent.h"
// Sets default values
AProjectileA::AProjectileA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// We create the mesh sphere for the projectile
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	MeshComp = CreateAbstractDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	//Set the radious of the sphere to 15
	CollisionComponent->InitSphereRadius(15.0f);
	//Set the component as root, as we did with blueprint editor
	RootComponent = CollisionComponent;

	MeshComp->SetupAttachment(CollisionComponent);

	//Setting the initial parameters for the projectile
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.3f;
	ProjectileMovementComponent->ProjectileGravityScale = .0f;
}

// Called when the game starts or when spawned
void AProjectileA::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectileA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectileA::NotifyHit(class UPrimitiveComponent * MyComp, AActor * Other, class UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	bool IsAllowed = false;

	for (int i = 0; i < Other->Tags.Num() && !IsAllowed; i++)
	{
		IsAllowed = AllowedTagsToDamage.Contains(Other->Tags[i]);
	}

	if (IsAllowed)
	{
		UActorComponent* component;
		component = nullptr;
		component = Other->GetComponentByClass(ULifeComponent::StaticClass());
		if (component)
		{
			ULifeComponent* life;
			life = Cast<ULifeComponent>(component);
			life->SetHitPoints(-damage);
		}
	}

	this->Destroy();
}

// Function that initializes the projectile's velocity in the shoot direction.
void AProjectileA::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

