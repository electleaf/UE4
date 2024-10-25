// Fill out your copyright notice in the Description page of Project Settings.


#include "Floater.h"

// Sets default values
AFloater::AFloater()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Custom Static Mesh"));

	IntialLocation = FVector(0.0f);
	PlacedLocation = FVector(0.0f);
	WorldOrigin = FVector(0.0f, 0.0f, 0.0f);
	IntialDirection = FVector(0.0f, 0.0f, 0.0f);

	bIntializeFloaterLocations = false;
	bShouldFloat = false;

	 InitialForce = FVector(2000000.f, 0.0f, 0.0f);
	 InitialTorque = FVector(2000000.f, 0.0f, 0.0f);


}

// Called when the game starts or when spawned
void AFloater::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("My Floater is intiailized"));
	float InitialX = FMath::FRand();
	float InitialY = FMath::FRand();
	float InitialZ = FMath::FRand();

	IntialLocation.X = InitialX;
	IntialLocation.X = InitialY;
	IntialLocation.X = InitialZ;

	IntialLocation *= 20.f;



	PlacedLocation = GetActorLocation();

	if (bIntializeFloaterLocations) 
	{

		SetActorLocation(IntialLocation);
	}
	
	//StaticMesh->AddForce(InitialForce);
	//StaticMesh->AddTorque(InitialTorque);
	
}

// Called every frame
void AFloater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bShouldFloat) {
		FHitResult HitResult;
		AddActorLocalOffset(IntialDirection, true, &HitResult);

		FVector HitLocation = HitResult.Location;

	}
	//FRotator Rotation = FRotator(1.0f, 0.0f, 0.0f);
	//AddActorLocalRotation(Rotation);

}

