// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AEatable/AEatables.h"
#include "APacGomme.generated.h"

/**
 * 
 */
UCLASS()
class TP2_UNREAL_API AAPacGomme : public AAEatables
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	AAPacGomme();

protected:
	// Called when the game starts or when spawned


public:	
	// Called every frame
	void OnEat(AActor* OtherActor);
};
