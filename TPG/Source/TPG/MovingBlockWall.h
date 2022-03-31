// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingBlockWall.generated.h"

UCLASS()
class TPG_API AMovingBlockWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingBlockWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Components")
		UStaticMeshComponent* StaticMesh;

	FVector MoveDirection;


	UPROPERTY(EditAnywhere, Category = "Movement")
		float MoveScale;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
