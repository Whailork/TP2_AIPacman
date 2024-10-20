// Fill out your copyright notice in the Description page of Project Settings.


#include "Ghost/OrangeGhostPawn.h"
#include "PacMan.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"

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
	/*SetOnScatterMode(true);

	targetLocation = coinsScatter[0]->GetActorLocation();*/

	//GhostAI->MoveToLocation(targetLocation);
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

// TODO : voir si ca marche

// Si Clyde est a plus de 8 cases de Pac-Man, il se comporte comme Blinky (le fantome rouge) et cible directement la position actuelle de Pac-Man.
void AOrangeGhostPawn::OnChaseMode()
{
	if(!isMoving)
	{
		// TODO : Calculer la distance en tuile plutot qu'en ligne droite
		float distance = FVector::Dist(GetActorLocation(), PacManReference->GetActorLocation());

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::SanitizeFloat(distance));

	
	
		if (distance <= 800.0f) {
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("trop proche"));
			SetOnChaseMode(false);
			SetOnScatterMode(true);
			Super::OnScatterMode();
		}
		else {
			SetOnChaseMode(true);
			SetOnScatterMode(false);

			targetLocation = PacManReference->GetActorLocation();
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("pourchasse"));
			isMoving = true;
			GhostAI->MoveToLocation(targetLocation, 0, false);
		
		}
	
	
	}
	
	
}