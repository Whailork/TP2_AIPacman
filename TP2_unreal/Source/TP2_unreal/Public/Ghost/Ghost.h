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
	bool OnScatterMode();
	UFUNCTION(BlueprintCallable)
	void OnFleeMode();
	UFUNCTION(BlueprintCallable)
	void OnChaseMode();
	UFUNCTION()
	void SetOnScatterMode(bool isOnScatterMode);

	UFUNCTION()
	void SetOnFleeMode(bool isInFleeMode);

	UFUNCTION()
	void SetOnChaseMode(bool isInChaseMode);

	UFUNCTION()
	void SetIsDead(bool isDead);

	UFUNCTION()
	void setModes(bool isOnScatterMode, bool isInFleeMode, bool isInChaseMode, bool isDead);

	void setFleeMode(bool value);
	bool getFleeMode();
	void setDeath(bool value);
	bool getIsDead();

	bool onScatterMode;
	bool inChaseMode;
	bool isDeadMode;

	UFUNCTION()
	void OnCatchOverlapBegin(AActor* MyActor, AActor* OtherActor); // (UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
