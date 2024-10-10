// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "AiController/Ghost_AIController.h"
#include "Ghost_AIController.generated.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Entity/EntityCharacter.h"
<<<<<<< Updated upstream
#include "AIController.h"
=======
#include "PacMan.h"
>>>>>>> Stashed changes
#include "GhostCharacter.generated.h"

UCLASS()
class TP2_UNREAL_API AGhostCharacter : public AEntityCharacter
{
	GENERATED_BODY()

	FVector targetLocation;
	AGhost_AIController AIController;

public:
	UPROPERTY()
	AAIController* GhostAI;
	// Sets default values for this character's properties
	AGhostCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	UFUNCTION()
	void OnCatchOverlapBegin(AActor* MyActor, AActor* OtherActor); // (UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	FVector GetPacmanLocation();
};
