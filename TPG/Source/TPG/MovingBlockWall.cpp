// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingBlockWall.h"
#include "Classes\Components\StaticMeshComponent.h"

// Sets default values
AMovingBlockWall::AMovingBlockWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");

}


FVector NewLocation, InitialLocation;
bool updown = 1;

// Called when the game starts or when spawned
void AMovingBlockWall::BeginPlay()
{
	Super::BeginPlay();
	
	InitialLocation = GetActorLocation();

}

// Called every frame
void AMovingBlockWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	NewLocation = GetActorLocation();

	if (InitialLocation.Y - 150.f >= NewLocation.Y)
		updown = 1;

	if (InitialLocation.Y + 150.f <= NewLocation.Y)
		updown = 0;

	if (updown)
		NewLocation.Y += DeltaTime * 150.f;
	else
		NewLocation.Y -= DeltaTime * 150.f;

	SetActorLocation(NewLocation);




}

