// Fill out your copyright notice in the Description page of Project Settings.

#include "AiController/Ghost_AIController.h"
#include "GameFramework/Actor.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"

// Behavior tree
#include"Ghost/RedGhostPawn.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"

// Behavior tree
AGhost_AIController::AGhost_AIController(const FObjectInitializer& ObjectInitializer)
{
    // Create BT Component
    BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTree Component"));
}

// Behavior tree
void AGhost_AIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    // Cast your Character/Pawn to get access to the attributes
    if (auto AICharactere = Cast<ARedGhostPawn>(InPawn))
    {
        // Check if the assets has been selected in the editor
        if (AICharactere->TreeAsset) {

            // Run the BT
            BehaviorTreeComponent->StartTree(*AICharactere->TreeAsset);
        }
    }
}


// Assuming this is inside your AI Controller class
void AGhost_AIController::MoveToLocation(const FVector& Destination, float AcceptanceRadius)
{
    APawn* ControlledPawn = GetPawn();
    if (!ControlledPawn)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No pawn in Ghost_AIController"));
        return;
    }

    UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Destination);

    //GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &AGhost_AIController::OnMoveCompletedEvent);;

    /*
    // Use AIMoveTo to move to a specified location
    FNavAgentProperties NavAgentProps = ControlledPawn->GetNavAgentPropertiesRef();

    UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());

    if (NavSys)
    {
        // The MoveToLocation function will trigger the AI to move to a destination
        FAIMoveRequest MoveRequest;
        MoveRequest.SetGoalLocation(Destination);
        //MoveRequest.SetAcceptanceRadius(AcceptanceRadius);

        FNavPathSharedPtr NavPath;

        NavSys->SimpleMoveToLocation(this, Destination);

        // Bind success/fail delegates if needed, for example:
        OnMoveCompleted.AddDynamic(this, &AMyAIController::OnMoveCompletedEvent);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Navigation system not found."));
    }
    */
}

void AGhost_AIController::OnMoveCompletedEvent(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    if (Result.IsSuccess())
    {
        UE_LOG(LogTemp, Log, TEXT("Move to destination successful!"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Move failed."));
    }
}