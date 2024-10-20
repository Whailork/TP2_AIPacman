// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "AIController.h"
#include "AiController/BaseAIController.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "CoreMinimal.h"
#include "Entity/EntityCharacter.h"
#include "Ghost.generated.h"


UCLASS()
class TP2_UNREAL_API AGhost : public AEntityCharacter
{
	GENERATED_BODY()

	// Properties
public:

	UPROPERTY(EditAnywhere, Category = "Particles")
	class UNiagaraComponent* Particles;

	UPROPERTY(EditAnywhere, Category = "AI")
	class UBehaviorTree* TreeAsset;

	UPROPERTY()
	ABaseAIController* GhostAI;

	// Variables
public:

	AGhost();

	FBlackboardKeySelector BlackboardKey;
	FVector targetLocation;

	bool onScatterMode;
	bool inChaseMode;
	bool inFleeMode;
	bool isDead;
	//pour le fantome bleu
	bool inRandomMode;
	bool isMoving;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override; // Called to bind functionality to input

	// Fonctions
public:
	UFUNCTION(BlueprintCallable)
	void OnScatterMode();

	UFUNCTION(BlueprintCallable)
	void OnFleeMode();

	UFUNCTION(BlueprintCallable)
	virtual void OnChaseMode();

	// Setters
public:
	UFUNCTION()
	void SetOnScatterMode(bool isOnScatterMode);

	UFUNCTION()
	void SetOnChaseMode(bool isInChaseMode);

	UFUNCTION(BlueprintCallable)
	void setFleeMode(bool value);

	UFUNCTION(BlueprintCallable)
	void setDeath(bool value);

	// Getters
public:
	UFUNCTION(BlueprintCallable)
	bool getFleeMode();
	
	UFUNCTION(BlueprintCallable)
	bool getIsDead();

	UFUNCTION(BlueprintCallable)
	bool getScatterMode();

	UFUNCTION(BlueprintCallable)
	bool getChaseMode();
};
