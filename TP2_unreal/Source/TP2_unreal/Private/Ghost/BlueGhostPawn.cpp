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

	/*
	if (getChaseMode()) {
		OnChaseMode();
	}
	*/
}

// Called to bind functionality to input
void ABlueGhostPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// TODO : voir si ca marche et comment le mettre dans le behaviour tree
/*
Selectionne une tuile 2 cases devant Pac-Man, selon sa direction (haut, bas, gauche, droite).
Si Blinky est a moins de 5 tuiles de Pac-Man, Inky se dirige vers cette tuile.
*/
void ABlueGhostPawn::OnChaseMode()
{
	// TODO : Calculer la distance en tuile plutot qu'en ligne droite
	SetOnChaseMode(true);
	SetOnScatterMode(false);
	setFleeMode(false);
	setDeath(false);
	
	// Variables
	FHitResult HitResult;
	float CaseSize = 100.0f;
	float DistanceInCases = 2.0f;
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, this);
	FVector directionVector = FVector::ZeroVector; // PacManReference->GetActorForwardVector(); Marche pas parce que le static mesh ne tourne pas
	FVector PacmanPosition = PacManReference->GetActorLocation();
	FVector TargetPosition = PacmanPosition + (directionVector * CaseSize * DistanceInCases);
	float distance = FVector::Dist(GetActorLocation(), PacManReference->GetActorLocation());

	if (PacManReference->direction == "DOWN") {
		directionVector.X -= 1;
	}
	else if (PacManReference->direction == "LEFT") {
		directionVector.Y -= 1;
	}
	else if (PacManReference->direction == "RIGHT") {
		directionVector.Y += 1;
	}
	else { // PacManReference->direction == "UP"
		directionVector.X += 1;
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::SanitizeFloat(distance));

	if (distance <= 400.0f) {
		
		targetLocation = PacmanPosition;
		GhostAI->MoveToLocation(targetLocation, 0, false);
	}
	else {
		
		targetLocation = TargetPosition;
		GhostAI->MoveToLocation(targetLocation, 0, false);
	}
}