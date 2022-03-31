// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockWall.h"
#include "Classes\Components\StaticMeshComponent.h"

// Sets default values
ABlockWall::ABlockWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");

}

// Called when the game starts or when spawned
void ABlockWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlockWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

