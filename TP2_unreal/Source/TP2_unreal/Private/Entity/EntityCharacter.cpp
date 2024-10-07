// Fill out your copyright notice in the Description page of Project Settings.


#include "Entity/EntityCharacter.h"
#include "Components/BoxComponent.h"
#include "GameFramework//FloatingPawnMovement.h"

// Sets default values
AEntityCharacter::AEntityCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
	RootComponent = BoxCollision;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(BoxCollision);

	MovementComponent = CreateDefaultSubobject<UPawnMovementComponent, UFloatingPawnMovement>(TEXT("MovementComponent"));
	MovementComponent->UpdatedComponent = BoxCollision;
}

// Called when the game starts or when spawned
void AEntityCharacter::BeginPlay()
{

}

// Called every frame
void AEntityCharacter::Tick(float DeltaTime)
{


}

// Called to bind functionality to input
void AEntityCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

}

void AEntityCharacter::MoveTo(FVector Location)
{
	MovementComponent->AddInputVector(Location);
}

FVector AEntityCharacter::Seek(FVector Target)
{
	FVector DesiredVelocity = Target - GetActorLocation();
	DesiredVelocity.Normalize();
	DesiredVelocity *= MovementComponent->GetMaxSpeed();

	FVector Steering = DesiredVelocity - MovementComponent->Velocity;
	Steering = Steering.GetClampedToMaxSize(MovementComponent->GetMaxSpeed());

	return Steering;
}