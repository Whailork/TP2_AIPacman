// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework//FloatingPawnMovement.h"
#include "Ghost/GhostCharacter.h"
#include <Kismet/KismetSystemLibrary.h>
#include "GameFramework/Actor.h"

#include "Entity/EntityCharacter.h"


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

	AEntityCharacter entity;

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ceci est un message à l'ecran from BeginPlay !"));

	MoveTo(FVector(currentLocation().X + 20, currentLocation().Y, currentLocation().Z));

	MovementComponent->AddInputVector(FVector(currentLocation().X + 20, currentLocation().Y, currentLocation().Z));
}

// Called every frame
void AGhostCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// float distance = FVector::DistSquared(targetLocation, currentLocation);
	// if (distance <= 5) { change targetLocation }

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ceci est un message à l'ecran from Tick !"));

	MoveTo(Seek(FVector(currentLocation().X + 20, currentLocation().Y, currentLocation().Z)));
}

// Called to bind functionality to input
void AGhostCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}



FVector AGhostCharacter::currentLocation()
{
    return GetActorLocation();
}
