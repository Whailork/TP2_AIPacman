// Fill out your copyright notice in the Description page of Project Settings.


#include "Corner/CornerActor.h"

#include "PacMan.h"

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

void ACornerActor::OnOverlap(AActor* MyActor, AActor* OtherActor)
{
	if (auto pacman = Cast<APacMan>(OtherActor))
	{
		
		//GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, TEXT("destroyBonus"));
		if(ContinueOnContact)
		{
			if(UpCorner != nullptr && UpCorner != pacman->PreviousTarget)
			{
				pacman->PreviousTarget = this;
				pacman->UpCorner = UpCorner;
				pacman->MoveUp();

			}
			else
			{
				if(DownCorner != nullptr && DownCorner != pacman->PreviousTarget)
				{
					pacman->PreviousTarget = this;
					pacman->DownCorner = DownCorner;
					pacman->MoveDown();

				}
				else
				{
					if(LeftCorner != nullptr && LeftCorner != pacman->PreviousTarget)
					{
						pacman->PreviousTarget = this;
						pacman->LeftCorner = LeftCorner;
						pacman->MoveLeft();

					}
					else
					{
						if(RightCorner != nullptr && RightCorner != pacman->PreviousTarget)
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

