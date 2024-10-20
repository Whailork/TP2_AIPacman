// Fill out your copyright notice in the Description page of Project Settings.

#include "Ghost/PinkGhostPawn.h"
#include "PacMan.h"

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

// TODO : voir si ca marche
void APinkGhostPawn::OnChaseMode()
{
	/*
	SetOnScatterMode(false);
	SetOnFleeMode(false);
	SetIsDead(false);
	SetOnChaseMode(true);
	*/
	
	float CaseSize = 100.0f;
	float DistanceInCases = 4.0f;

	FVector directionVector = PacManReference->GetActorForwardVector();
	FVector PacmanPosition = PacManReference->GetActorLocation();
	FVector TargetPosition = PacmanPosition + (directionVector * CaseSize * DistanceInCases);

	// Raycast
	FHitResult HitResult;
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, this);

	bool hit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		PacmanPosition,
		TargetPosition,
		ECC_Visibility,
		TraceParams
	);

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
	}

	GhostAI->MoveToLocation(targetLocation, 0, false);

}