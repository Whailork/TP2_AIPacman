// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/BoxComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

// Sets default values
APacMan::APacMan()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	BoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxColision");
	BoxCollision->SetupAttachment(StaticMesh);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	RootComponent = StaticMesh;

	
	MovementComponent = CreateDefaultSubobject<UPawnMovementComponent, UFloatingPawnMovement>(TEXT("MovementComponent0"));
	MovementComponent->UpdatedComponent = BoxCollision;
	
}

// Called when the game starts or when spawned
void APacMan::BeginPlay()
{
	Super::BeginPlay();
	isMoving = false;
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext,0);
		}
	}
	
}

// Called every frame
void APacMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APacMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if(UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(UpAction,ETriggerEvent::Triggered,this,&APacMan::MoveUp);
		EnhancedInputComponent->BindAction(DownAction,ETriggerEvent::Triggered,this,&APacMan::MoveDown);
		EnhancedInputComponent->BindAction(LeftAction,ETriggerEvent::Triggered,this,&APacMan::MoveLeft);
		EnhancedInputComponent->BindAction(RightAction,ETriggerEvent::Triggered,this,&APacMan::MoveRight);
	}
}

void APacMan::MoveTo(FVector Location)
{
	MovementComponent->AddInputVector(Location);
}

FVector APacMan::Seek(FVector Target)
{
	FVector DesiredVelocity = Target - GetActorLocation();
	DesiredVelocity.Normalize();
	DesiredVelocity *= MovementComponent->GetMaxSpeed();

	FVector Steering = DesiredVelocity - MovementComponent->Velocity;
	Steering = Steering.GetClampedToMaxSize(MovementComponent->GetMaxSpeed());

	return Steering;
}

void APacMan::MoveUp()
{
	
	if (UpCorner != nullptr && !isMoving)
	{
		MoveTo(Seek(UpCorner->GetActorLocation()));
		isMoving = true;
	}
}

void APacMan::MoveDown()
{
	if (DownCorner != nullptr && !isMoving)
	{
		MoveTo(Seek(DownCorner->GetActorLocation()));
		isMoving = true;
	}
}

void APacMan::MoveLeft()
{
	if (LeftCorner != nullptr && !isMoving)
	{
		MoveTo(Seek(LeftCorner->GetActorLocation()));
		isMoving = true;	
	}
}

void APacMan::MoveRight()
{
	if (RightCorner != nullptr && !isMoving)
	{
		MoveTo(Seek(RightCorner->GetActorLocation()));
		isMoving = true;
	}
}

