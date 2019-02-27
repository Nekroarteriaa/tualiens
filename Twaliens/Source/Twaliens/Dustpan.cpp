// All rights reserved.

#include "Dustpan.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
UDustpan::UDustpan()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//OJO CUIDADO QUE EL TICK ESTA DESACTIVADO
	PrimaryComponentTick.bCanEverTick = false;

	// ...

	//Initialize components
	SuckArea = CreateDefaultSubobject<USphereComponent>("SuckArea");
	SuckArea->SetupAttachment(this);
	SuckArea->SetRelativeLocation(GetForwardVector() * SuckRadio);
	SuckArea->SetSphereRadius(SuckRadio);

	//We assign functions to delegates
	OverlapEnterDelegate.BindUFunction(this, FName("OnObjectEnterToArea"));
	SuckArea->OnComponentBeginOverlap.Add(OverlapEnterDelegate);

	OverlapExitDelegate.BindUFunction(this, FName("OnObjectExitToArea"));
	SuckArea->OnComponentEndOverlap.Add(OverlapExitDelegate);

	PushDistanceStart = 250.0f;
	PushDistance = 250.0f;
}


// Called when the game starts
void UDustpan::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

// Called every frame
void UDustpan::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDustpan::Suck()
{
	class UWorld* const world = GetWorld();

	FHitResult HittedObject;
	FVector Location = this->GetComponentLocation();
	FVector Direction;
	FCollisionQueryParams CollisionParams;
	//UPrimitiveComponent* PC;

	//We iterate over all actors in dustpan suck area
	for (AActor * Coin : ActorsInArea)
	{
		UActorComponent * Component;
		UPrimitiveComponent * Primitive;
		
		//We get Primitive Component for aplying forces over it
		Component = Coin->GetComponentByClass(UPrimitiveComponent::StaticClass());
		if (Component)
		{
			//We cast to UPrimitiveComponent, this is because below function return UActorComponent
			Primitive = Cast<UPrimitiveComponent>(Component);

			//We calculate vector from coin to dustpan
			Direction = Location - Coin->GetActorLocation();
			Direction.Normalize();

			//If Coin is close
			if (FVector::DistSquaredXY(Coin->GetActorLocation(), Location) <= SuckedDistance)
			{
				//We broadcast that we sucked a coin
				OnActorHasBeenSucked.Broadcast(Coin);

				//We can't resize TArray in for instruction (Exceptions), so we use another TArray.
				ActorsSuckedInArea.Add(Coin);
			}
			else
			{
				//We apply force to coin
				Primitive->SetPhysicsLinearVelocity(Direction * SuckVelocity);
			}
		}
	}

	//WE iterate over all sucked actors, as we said before we do this because exceptions.
	for (AActor * Coin : ActorsSuckedInArea)
	{
		//Remove coin of first TArray
		ActorsInArea.Remove(Coin);
		//Destroy coin
		Coin->Destroy();
	}

	Direction = this->GetForwardVector();

	if (world->LineTraceSingleByChannel(HittedObject, Location, Direction * PushDistanceStart + Location, ECC_Camera, CollisionParams))
	{
		if (HittedObject.bBlockingHit &&  HittedObject.GetActor()->ActorHasTag("Enemy"))
		{
			HittedObject.GetActor()->SetActorLocation(Direction * PushDistance + HittedObject.GetActor()->GetActorLocation());
		}
	}

}

void UDustpan::OnObjectEnterToArea(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//If actor is a coin and it isn't in Suckarea.
	if (OtherActor->Tags.Contains("Coin") && !ActorsInArea.Contains(OtherActor))
	{
		//Add coin
		ActorsInArea.Add(OtherActor);
	}
}

void UDustpan::OnObjectExitToArea(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	//If actor is a coin and it is in Suckarea.
	if (OtherActor->Tags.Contains("Coin") && ActorsInArea.Contains(OtherActor))
	{
		//Remove coin from TArray
		ActorsInArea.Remove(OtherActor);
	}
}

//Add a function to delegate that broadcast whenever actor dies.
void UDustpan::AddDelegateToSuck(const FScriptDelegate & Delegate)
{
	OnActorHasBeenSucked.Add(Delegate);
}

//Remove a function from life changes delegate.
void UDustpan::RemoveDelegateFromSuck(const FScriptDelegate & Delegate)
{
	OnActorHasBeenSucked.Remove(Delegate);
}

//Clear all functions from life changes delegate.
void UDustpan::RemoveAllDelegatesFromSuck()
{
	OnActorHasBeenSucked.Clear();
}