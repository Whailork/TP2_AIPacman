// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Ghost.h"
#include "RedGhostPawn.generated.h"

UCLASS()
class TP2_UNREAL_API ARedGhostPawn : public AGhost
{
	GENERATED_BODY()

// Behavior tree
public:

	UPROPERTY(EditAnywhere, Category = "AI")
	class UBehaviorTree* TreeAsset;

	

public:
	bool onScatterMode;

public:
	// Sets default values for this pawn's properties
	ARedGhostPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void SetOnScatterMode(bool isOnScatterMode);
	UFUNCTION(BlueprintCallable)
	void OnChaseMode();
	UFUNCTION(BlueprintCallable)
	void OnScatterMode();
};
