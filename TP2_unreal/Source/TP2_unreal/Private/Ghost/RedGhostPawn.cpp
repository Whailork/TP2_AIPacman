// Fill out your copyright notice in the Description page of Project Settings.


#include "ghost/RedGhostPawn.h"

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

    // TODO: appeler au bon endroit
    SetOnScatterMode(true);

    targetLocation = coinsScatter[0]->GetActorLocation();

    GhostAI->MoveToLocation(targetLocation);
}

// Called every frame
void ARedGhostPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // TODO : voir si ca fait pas bug
    float distance = (this->GetActorLocation() - targetLocation).Size();
    if (distance < 0.5) {

        targetLocation = coinsScatter[0]->GetActorLocation();
        GhostAI->MoveToLocation(targetLocation);
    }
}

// Called to bind functionality to input
void ARedGhostPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ARedGhostPawn::SetOnScatterMode(bool isOnScatterMode)
{
    this->onScatterMode = isOnScatterMode;
}


// TODO : voir si ca marche et comment le mettre dans le behaviour tree
void ARedGhostPawn::OnChaseMode()
{
    SetOnScatterMode(false);

    GhostAI->MoveToLocation(PacManReference->GetActorLocation());
}
