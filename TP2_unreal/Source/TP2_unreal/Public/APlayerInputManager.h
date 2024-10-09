// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PacMan.h"
#include "GameFramework/Actor.h"
#include "APlayerInputManager.generated.h"

UCLASS()
class TP2_UNREAL_API AAPlayerInputManager : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAPlayerInputManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere)
	APacMan* pacman;
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputMappingContext* DefaultMappingContext;
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputAction* UpAction;
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputAction* DownAction;
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputAction* LeftAction;
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputAction* RightAction;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
};
