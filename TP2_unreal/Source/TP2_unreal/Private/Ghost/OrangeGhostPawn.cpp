// Fill out your copyright notice in the Description page of Project Settings.


#include "Ghost/OrangeGhostPawn.h"

// Sets default values
AOrangeGhostPawn::AOrangeGhostPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOrangeGhostPawn::BeginPlay()
{
	Super::BeginPlay();
	
	// TODO: appeler au bon endroit
	SetOnScatterMode(true);

	targetLocation = coinsScatter[0]->GetActorLocation();

	GhostAI->MoveToLocation(targetLocation);
}

// Called every frame
void AOrangeGhostPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AOrangeGhostPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// TODO : voir si ca marche et comment le mettre dans le behaviour tree
void AOrangeGhostPawn::OnChaseMode()
{
	/*
	SetOnScatterMode(false);
	SetOnFleeMode(false);
	SetIsDead(false);
	SetOnChaseMode(true);

	//targetLocation
	targetLocation = PacManReference->GetActorLocation();
	GhostAI->MoveToLocation(targetLocation, 0, false);
	*/
}