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
		pacman->isMoving = false;
		pacman->UpCorner = UpCorner;
		pacman->DownCorner = DownCorner;
		pacman->LeftCorner = LeftCorner;
		pacman->RightCorner = RightCorner;
	}
	
}

