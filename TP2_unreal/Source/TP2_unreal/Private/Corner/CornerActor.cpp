// Fill out your copyright notice in the Description page of Project Settings.

#include "Corner/CornerActor.h"
#include <cmath>
#include "PacMan.h"
#include "Ghost/Ghost.h"

// Sets default values
ACornerActor::ACornerActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACornerActor::BeginPlay()
{
	Super::BeginPlay();
	this->OnActorBeginOverlap.AddDynamic(this, &ACornerActor::OnOverlap);

}

// Called every frame
void ACornerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACornerActor::AddNeighborCorner(ACornerActor* neighbor)
{
	NeighborsArray.Add(neighbor);
}

/*
void ACornerActor::HandleScatterMode(AGhostCharacter* ghost, AActor* MyActor) {

	bool coinHorsScatter = true;

	for (int x = 0; x < ghost->coinsScatter.Num(); x++) {
		if (ghost->coinsScatter[x]->GetActorLocation() == MyActor->GetActorLocation()) {
			coinHorsScatter = false;

			int nextTarget = (x + 1) % ghost->coinsScatter.Num();
			ghost->targetLocation = ghost->coinsScatter[nextTarget]->GetActorLocation();
			break;
		}
	}

	if (coinHorsScatter) {
		ghost->targetLocation = ghost->coinsScatter[0]->GetActorLocation();
	}

	ghost->GhostAI->MoveToLocation(ghost->targetLocation, 0, false);
}*/

void ACornerActor::OnOverlap(AActor* MyActor, AActor* OtherActor)
{

	
	if (auto ghost = Cast<AGhost>(OtherActor))
	{
		ghost->isMoving = false;
		
		
		
		auto corner = Cast<ACornerActor>(MyActor);
		if (ghost->getFleeMode() || ghost->inRandomMode) {
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("flee"));
			ACornerActor* RandomCorner = nullptr;
			bool validTargetFound = false;

			while (!validTargetFound)
			{
				int RandomIndex = FMath::RandRange(0, 3);

				switch (RandomIndex)
				{
				case 0:
					if(corner->UpCorner != nullptr)
					{
						//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("upSelected"));
						RandomCorner = corner->UpCorner;
						validTargetFound = true;
					}
					break;
				case 1:
					if(corner->RightCorner != nullptr)
					{
						//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("right selected"));
						RandomCorner = corner->RightCorner;
						validTargetFound = true;
					}
					break;
				case 2:
					if(corner->DownCorner != nullptr)
					{
						//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("down selected"));
						RandomCorner = corner->DownCorner;
						validTargetFound = true;
					}
					break;
				case 3:
					if(corner->LeftCorner != nullptr)
					{
						//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("left selected"));
						RandomCorner = corner->LeftCorner;
						validTargetFound = true;
					}
					break;
						
				}
				// RandomCorner != null && RandomCorner != emplacement pr�c�dent
				/*if (RandomCorner != nullptr &&
					ghost->PacManReference->PreviousTarget != nullptr &&
					ghost->PacManReference->PreviousTarget->GetActorLocation() != RandomCorner->GetActorLocation())
				{
					validTargetFound = true;
				}*/
			}

			if (RandomCorner != nullptr)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("set flee target"));
				ghost->targetLocation = RandomCorner->GetActorLocation();
			}
				
			

		}
		/* If is in chase mode, le orange et le bleu doivent surveiller a chaque coins ils sont a quelle distance du pacman
		else if () {

		}
		*/
		else
		{
			if (ghost->onScatterMode)
			{
				bool coinHorsScatter = true;

				for (int x = 0; x < ghost->coinsScatter.Num(); x++) {

					if (ghost->coinsScatter[x]->GetActorLocation() == MyActor->GetActorLocation()) {
						coinHorsScatter = false;

						int nextTarget = (x + 1) % ghost->coinsScatter.Num();
						ghost->targetLocation = ghost->coinsScatter[nextTarget]->GetActorLocation();

						break;
					}
				}
				if (coinHorsScatter) {
					ghost->targetLocation = ghost->coinsScatter[0]->GetActorLocation();
				}
			}

			else
			{
				ghost->targetLocation = ghost->PacManReference->GetActorLocation();
			}
			//ghost->GhostAI->MoveToLocation(ghost->targetLocation, 0, false);
		}

	}

	/*if (auto redGhost = Cast<ARedGhostPawn>(OtherActor)) {

		if (redGhost->onScatterMode) {

			bool coinHorsScatter = true;

			for (int x = 0; x < redGhost->coinsScatter.Num(); x++) {

				if (redGhost->coinsScatter[x]->GetActorLocation() == MyActor->GetActorLocation()) {
					coinHorsScatter = false;

					int nextTarget = (x + 1) % redGhost->coinsScatter.Num();
					redGhost->targetLocation = redGhost->coinsScatter[nextTarget]->GetActorLocation();

					break;
				}
			}

			if (coinHorsScatter) {
				redGhost->targetLocation = redGhost->coinsScatter[0]->GetActorLocation();
			}
		}
		else
		{
			redGhost->targetLocation = redGhost->PacManReference->GetActorLocation();
		}

		redGhost->GhostAI->MoveToLocation(redGhost->targetLocation, 0, false);
	}
	if (auto blueGhost = Cast<ABlueGhostPawn>(OtherActor)) {

		if (blueGhost->onScatterMode) {

			bool coinHorsScatter = true;

			for (int x = 0; x < blueGhost->coinsScatter.Num(); x++) {

				if (blueGhost->coinsScatter[x]->GetActorLocation() == MyActor->GetActorLocation()) {
					coinHorsScatter = false;

					int nextTarget = (x + 1) % blueGhost->coinsScatter.Num();
					blueGhost->targetLocation = blueGhost->coinsScatter[nextTarget]->GetActorLocation();

					break;
				}
			}

			if (coinHorsScatter) {
				blueGhost->targetLocation = blueGhost->coinsScatter[0]->GetActorLocation();
			}
		}

		blueGhost->GhostAI->MoveToLocation(blueGhost->targetLocation, 0, false);
	}
	else if (auto orangeGhost = Cast<AOrangeGhostPawn>(OtherActor)) {

		if (orangeGhost->onScatterMode) {

			bool coinHorsScatter = true;

			for (int x = 0; x < orangeGhost->coinsScatter.Num(); x++) {

				if (orangeGhost->coinsScatter[x]->GetActorLocation() == MyActor->GetActorLocation()) {
					coinHorsScatter = false;

					int nextTarget = (x + 1) % orangeGhost->coinsScatter.Num();
					orangeGhost->targetLocation = orangeGhost->coinsScatter[nextTarget]->GetActorLocation();

					break;
				}
			}

			if (coinHorsScatter) {
				orangeGhost->targetLocation = orangeGhost->coinsScatter[0]->GetActorLocation();
			}
		}

		orangeGhost->GhostAI->MoveToLocation(orangeGhost->targetLocation, 0, false);
	}
	else if (auto pinkGhost = Cast<APinkGhostPawn>(OtherActor)) {

		if (pinkGhost->onScatterMode) {

			bool coinHorsScatter = true;

			for (int x = 0; x < pinkGhost->coinsScatter.Num(); x++) {

				if (pinkGhost->coinsScatter[x]->GetActorLocation() == MyActor->GetActorLocation()) {
					coinHorsScatter = false;

					int nextTarget = (x + 1) % pinkGhost->coinsScatter.Num();
					pinkGhost->targetLocation = pinkGhost->coinsScatter[nextTarget]->GetActorLocation();

					break;
				}
			}

			if (coinHorsScatter) {
				pinkGhost->targetLocation = pinkGhost->coinsScatter[0]->GetActorLocation();
			}
		}

		pinkGhost->GhostAI->MoveToLocation(pinkGhost->targetLocation, 0, false);
	}*/
	else if (auto pacman = Cast<APacMan>(OtherActor))
	{

		//GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, TEXT("destroyBonus"));
		if (ContinueOnContact)
		{
			if (UpCorner != nullptr && UpCorner != pacman->PreviousTarget)
			{
				pacman->PreviousTarget = this;
				pacman->UpCorner = UpCorner;
				pacman->MoveUp();
			}
			else
			{
				if (DownCorner != nullptr && DownCorner != pacman->PreviousTarget)
				{
					pacman->PreviousTarget = this;
					pacman->DownCorner = DownCorner;
					pacman->MoveDown();

				}
				else
				{
					if (LeftCorner != nullptr && LeftCorner != pacman->PreviousTarget)
					{
						pacman->PreviousTarget = this;
						pacman->LeftCorner = LeftCorner;
						pacman->MoveLeft();

					}
					else
					{
						if (RightCorner != nullptr && RightCorner != pacman->PreviousTarget)
						{
							pacman->PreviousTarget = this;
							pacman->RightCorner = RightCorner;
							pacman->MoveRight();

						}
					}
				}
			}
		}
		else
		{
			pacman->isMoving = false;
			pacman->PreviousTarget = this;
			pacman->UpCorner = UpCorner;
			pacman->DownCorner = DownCorner;
			pacman->LeftCorner = LeftCorner;
			pacman->RightCorner = RightCorner;
		}


	}

}

