// Fill out your copyright notice in the Description page of Project Settings.

#include "Ghost/PinkGhostPawn.h"
#include "PacMan.h"
#include "NavigationSystem.h"


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
}

// Called every frame
void APinkGhostPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	if (getChaseMode()) {
		OnChaseMode();
	}
	*/
}

// Called to bind functionality to input
void APinkGhostPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

/*
void APinkGhostPawn::OnScatterMode()
{
	targetLocation = coinsScatter[0]->GetActorLocation();
	GhostAI->MoveToLocation(targetLocation, 0, false);
}

void APinkGhostPawn::InFleeMode()
{

	targetLocation = coinsScatter[0]->GetActorLocation();
	GhostAI->MoveToLocation(targetLocation, 0, false);
}
*/

// TODO : voir si ca marche
void APinkGhostPawn::OnChaseMode()
{
	
	// Initialisation
	SetOnChaseMode(true);


	// Variables
	FNavLocation HitResult;
	float CaseSize = 100.0f;
	float DistanceInCases = 4.0f;
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, this);
	FVector directionVector = FVector::ZeroVector; // PacManReference->GetActorForwardVector(); Marche pas parce que le static mesh ne tourne pas
	FVector PacmanPosition = PacManReference->GetActorLocation();
	FVector TargetPosition = FVector::ZeroVector;

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

	TargetPosition = PacmanPosition + (directionVector * CaseSize * DistanceInCases);

	FVector QueryingExtent = FVector(0.0f, 0.0f, 0.0f);
	
	bool bOnNavMesh = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld())->ProjectPointToNavigation(TargetPosition, HitResult,QueryingExtent);

	
	if(bOnNavMesh)
	{
		targetLocation = TargetPosition;
	}
	else
	{
		targetLocation = PacmanPosition;
	}
	

	
	// Raycast
	/*bool hit = GetWorld()->AsyncLineTraceByObjectType(
		HitResult,
		PacmanPosition,
		TargetPosition,
		ECC_Visibility,
		TraceParams
	);

	FString message = (hit) ? "Hit" : "No Hit";
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, message);
	
	if (hit)
	{
		AActor* HitActor = HitResult.GetActor();

		if (HitActor)
		{
			auto ghost = Cast<AGhost>(HitActor);
			auto coin = Cast<ACornerActor>(HitActor);

			if (ghost || coin) {
				targetLocation = TargetPosition;
			}
			else {
				FVector ImpactPoint = HitResult.ImpactPoint;
				targetLocation = ImpactPoint - (directionVector * CaseSize);
			}
		}
	}
	else
	{
		targetLocation = TargetPosition;
	}*/

	//GhostAI->MoveToLocation(targetLocation, 0, false);
	
	
	//targetLocation = TargetPosition;
	isMoving = true;
	GhostAI->MoveToLocation(targetLocation, 0, false);
}