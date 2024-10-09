// Fill out your copyright notice in the Description page of Project Settings.


#include "Ghost/GhostCharacter.h"
#include <NavigationSystem.h>
#include <Kismet/KismetSystemLibrary.h>
#include "GameFramework/Actor.h"


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

    MoveNPC();
}

// Called every frame
void AGhostCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// float distance = FVector::DistSquared(targetLocation, currentLocation);
	// if (distance <= 5) { change targetLocation }
	// MoveTo(Seek(targetLocation));
}

// Called to bind functionality to input
void AGhostCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AGhostCharacter::MoveNPC()
{
    targetLocation = FindRandomReachableLocation();

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Vector: %s"), *targetLocation.ToString()));

    MoveTo(targetLocation);


    SetActorLocation(targetLocation);
}

FVector AGhostCharacter::FindRandomReachableLocation()
{
    // Variables
    float Radius = 1000.0f;
    FVector RandomLocation = FVector(0, 0, 0);;

    // Get the navigation system
    UNavigationSystemV1* navigationSystem = UNavigationSystemV1::GetCurrent(GetWorld());

    if (navigationSystem)
    {
        FNavLocation navLocation;
        bool RandomPointFound = navigationSystem->GetRandomReachablePointInRadius(currentLocation(), Radius, navLocation);

        // TODO : quoi faire si Random Point NOT Found??
        if (RandomPointFound) {
            RandomLocation = navLocation.Location;
        }
    }

    return RandomLocation;
}

FVector AGhostCharacter::currentLocation()
{
    return GetActorLocation();
}
