// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Ghost.h"
#include "PinkGhostPawn.generated.h"

UCLASS()
class TP2_UNREAL_API APinkGhostPawn : public AGhost
{
	GENERATED_BODY()

public:
	bool onScatterMode;

public:
	// Sets default values for this pawn's properties
	APinkGhostPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void OnChaseMode();
	UFUNCTION(BlueprintCallable)
	void OnScatterMode();
	UFUNCTION(BlueprintCallable)
	void InFleeMode();
};
