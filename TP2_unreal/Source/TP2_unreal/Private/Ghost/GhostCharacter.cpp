// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/StaticMeshActor.h"
#include "GameFramework//FloatingPawnMovement.h"
#include "Ghost/GhostCharacter.h"
#include <Kismet/KismetSystemLibrary.h>
#include "GameFramework/Actor.h"
#include "Entity/EntityCharacter.h"
#include "PacMan.h"
#include "EngineUtils.h"
#include"Corner/CornerActor.h"
#include <Kismet/GameplayStatics.h>

// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ceci est un message!"));


// Sets default values
AGhostCharacter::AGhostCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGhostCharacter::BeginPlay()
{
	Super::BeginPlay();

    PacManReference = nullptr;
    targetLocation = FVector::ZeroVector;
}

// Called every frame
void AGhostCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // float distance = FVector::DistSquared(targetLocation, currentLocation);
    // if (distance <= 5) { change targetLocation }

    // MoveTo(Seek(FVector(currentLocation().X + 20, currentLocation().Y, currentLocation().Z)));

    // Comparer MonVecteur à ZeroVector
    if (targetLocation != FVector::ZeroVector)
    {
        MoveTo(Seek(targetLocation));
    }
}

void AGhostCharacter::OnCatchOverlapBegin(AActor* OtherActor)
{
    // Si je collisione avec un coin
    if (OtherActor && OtherActor->IsA(ACornerActor::StaticClass()))
    {
        // TODO : trouve ou est pacman et va vers lui
        SetPacmanReference();

        targetLocation = PacManReference->GetActorLocation();
    }
}

// Called to bind functionality to input
void AGhostCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AGhostCharacter::SetPacmanReference()
{
    TArray<AActor*> TousLesActeurs;
    UWorld* World = GetWorld();

    if (World){
        TousLesActeurs = GetLevel()->Actors;

        for (AActor* Acteur : TousLesActeurs)
        {

            if (auto pacman = Cast<APacMan>(Acteur)) {

                PacManReference = pacman;
            }

            /*
            if (Acteur) //(Acteur ->IsA(APacMan::StaticClass))
            {
                PacManReference = Acteur;

                //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("IF : ") + Acteur->GetName());

                break;
            }
            */
        }
    }
}
