// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanAIController.h"

// Behavior tree
#include "PacMan.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"

// Behavior tree
APacmanAIController::APacmanAIController(const FObjectInitializer& ObjectInitializer)
{
    // Create BT Component
    BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTree Component"));
}

// Behavior tree
void APacmanAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    // Cast your Character/Pawn to get access to the attributes
    if (auto AICharactere = Cast<APacMan>(InPawn))
    {
        // Check if the assets has been selected in the editor
        if (AICharactere->TreeAsset) {

            // Run the BT
            BehaviorTreeComponent->StartTree(*AICharactere->TreeAsset);
        }
    }
}
