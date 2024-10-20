// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class TP2_UNREAL_API ABaseAIController : public AAIController
{
	GENERATED_BODY()


	
public:
	ABaseAIController(const FObjectInitializer& ObjectInitializer);

	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(Transient)
	class UBehaviorTreeComponent* BehaviorTreeComponent;
	UPROPERTY(Transient)
	class UBlackboardComponent* BlackboardComponent;

};
