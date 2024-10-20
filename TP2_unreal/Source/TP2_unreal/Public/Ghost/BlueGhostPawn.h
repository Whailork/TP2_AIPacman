// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Ghost.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BlueGhostPawn.generated.h"

UCLASS()
class TP2_UNREAL_API ABlueGhostPawn : public AGhost
{
	GENERATED_BODY()

public:
	bool onScatterMode;

public:
	// Sets default values for this pawn's properties
	ABlueGhostPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void OnChaseMode() override;
};
