// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Ghost.h"
#include "OrangeGhostPawn.generated.h"

UCLASS()
class TP2_UNREAL_API AOrangeGhostPawn : public AGhost
{
	GENERATED_BODY()

public:
	bool onScatterMode;

public:
	// Sets default values for this pawn's properties
	AOrangeGhostPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//virtual void OnChaseMode() override;
	void OnChaseMode() override;
};
