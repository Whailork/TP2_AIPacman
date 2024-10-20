// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "AIController.h"
#include "CoreMinimal.h"
#include "AiController/BaseAIController.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Entity/EntityCharacter.h"
#include "Ghost.generated.h"


UCLASS()
class TP2_UNREAL_API AGhost : public AEntityCharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "AI")
	class UBehaviorTree* TreeAsset;

	FVector targetLocation;
	FBlackboardKeySelector BlackboardKey;

public:
	UPROPERTY()
	ABaseAIController* GhostAI;
	AGhost();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool inFleeMode;
	bool isDead;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION(BlueprintCallable)
	void OnScatterMode();
	UFUNCTION(BlueprintCallable)
	void OnFleeMode();
	UFUNCTION(BlueprintCallable)
	virtual void OnChaseMode();
	UFUNCTION()
	void SetOnScatterMode(bool isOnScatterMode);
	

	UFUNCTION()
	void SetOnChaseMode(bool isInChaseMode);

	UFUNCTION()
	void SetIsDead(bool isDead);

	

	void setFleeMode(bool value);
	UFUNCTION(BlueprintCallable)
	bool getFleeMode();
	void setDeath(bool value);
	UFUNCTION(BlueprintCallable)
	bool getIsDead();

	bool onScatterMode;
	bool inChaseMode;
	bool isDeadMode;

	
};
