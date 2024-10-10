// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AEatable/AEatables.h"
#include "SuperPacGomme.generated.h"

/**
 * 
 */
UCLASS()
class TP2_UNREAL_API ASuperPacGomme : public AAEatables
{
	GENERATED_BODY()

	ASuperPacGomme();
public:	
	// Called every frame
	void OnEat(AActor* OtherActor);
};
