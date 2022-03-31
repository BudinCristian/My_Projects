// Fill out your copyright notice in the Description page of Project Settings.


#include "RoundPlatform.h"
#include "Classes\Components\StaticMeshComponent.h"
#include "Classes\Components\SceneComponent.h"

// Sets default values
ARoundPlatform::ARoundPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>("DefaultSceneRoot");

	RootComponent = SceneRoot;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");

	StaticMesh2 = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent2");
	
	
}

// Called when the game starts or when spawned
void ARoundPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoundPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

