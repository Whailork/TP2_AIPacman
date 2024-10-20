// Fill out your copyright notice in the Description page of Project Settings.


#include "ghost/RedGhostPawn.h"
#include "PacMan.h"
#include <AiController/BaseAIController.h>
#include <Kismet/GameplayStatics.h>

// Sets default values
ARedGhostPawn::ARedGhostPawn()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARedGhostPawn::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ARedGhostPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ARedGhostPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}


// TODO : voir si ca marche
void ARedGhostPawn::OnChaseMode()
{
    SetOnChaseMode(true);

    //targetLocation
    targetLocation = PacManReference->GetActorLocation();
    isMoving = true;
    GhostAI->MoveToLocation(targetLocation,0, false);
}


