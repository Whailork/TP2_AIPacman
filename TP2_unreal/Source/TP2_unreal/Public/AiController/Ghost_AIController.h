// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Ghost_AIController.generated.h"

UCLASS()
class TP2_UNREAL_API AGhost_AIController : public AAIController
{
	GENERATED_BODY()
	
public:
	void MoveToLocation(const FVector& Destination, float AcceptanceRadius);
	void OnMoveCompletedEvent(FAIRequestID RequestID, const FPathFollowingResult& Result);
};
