// Fill out your copyright notice in the Description page of Project Settings.

#include "PacMan.h"
#include "Ghost/BlueGhostPawn.h"

// Sets default values
ABlueGhostPawn::ABlueGhostPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlueGhostPawn::BeginPlay()
{
	Super::BeginPlay();
	
	// TODO: appeler au bon endroit
	SetOnScatterMode(true);

	targetLocation = coinsScatter[0]->GetActorLocation();

	GhostAI->MoveToLocation(targetLocation);
}

// Called every frame
void ABlueGhostPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABlueGhostPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// TODO : voir si ca marche et comment le mettre dans le behaviour tree
void ABlueGhostPawn::OnChaseMode()
{
	SetOnChaseMode(true);
	SetOnScatterMode(false);
	setFleeMode(false);
	setDeath(false);

	//targetLocation
	targetLocation = PacManReference->GetActorLocation();
	GhostAI->MoveToLocation(targetLocation, 0, false);



	// TODO : Calculer la distance en tuile plutot qu'en ligne droite
	float distance = FVector::Dist(GetActorLocation(), PacManReference->GetActorLocation());

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::SanitizeFloat(distance));

	if (distance < 400.0f) {
		SetOnChaseMode(false);
		SetOnScatterMode(true);
	}
	else {
		SetOnChaseMode(true);
		SetOnScatterMode(false);

		targetLocation = PacManReference->GetActorLocation();
		GhostAI->MoveToLocation(targetLocation, 0, false);
	}

	setFleeMode(false);
	setDeath(false);
}