// Fill out your copyright notice in the Description page of Project Settings.

#include "PacMan.h"
#include "Ghost/PinkGhostPawn.h"

// Sets default values
APinkGhostPawn::APinkGhostPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APinkGhostPawn::BeginPlay()
{
	Super::BeginPlay();
	
	// TODO: appeler au bon endroit
	SetOnScatterMode(true);

	targetLocation = coinsScatter[0]->GetActorLocation();

	GhostAI->MoveToLocation(targetLocation);
}

// Called every frame
void APinkGhostPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APinkGhostPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APinkGhostPawn::OnChaseMode()
{
	setModes(false, false, true, false);


	//targetLocation
	targetLocation = PacManReference->GetActorLocation();
	GhostAI->MoveToLocation(targetLocation, 0, false);
}

void APinkGhostPawn::OnScatterMode()
{
	setModes(true, false, false, false);

	targetLocation = coinsScatter[0]->GetActorLocation();
	GhostAI->MoveToLocation(targetLocation, 0, false);
}

void APinkGhostPawn::InFleeMode()
{
	setModes(false, true, false, false);

	targetLocation = coinsScatter[0]->GetActorLocation();
	GhostAI->MoveToLocation(targetLocation, 0, false);
}

