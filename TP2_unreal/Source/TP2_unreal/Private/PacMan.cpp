// Fill out your copyright notice in the Description page of Project Settings.


#include "PacMan.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/BoxComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Ghost/Ghost.h"

void APacMan::stopInFleeMode()
{
	ghostEatStreak = 0;
	inFleeMode = false;
}

// Sets default values
APacMan::APacMan()
{
	
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
	
	/*BoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
	RootComponent = BoxCollision;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(BoxCollision);

	MovementComponent = CreateDefaultSubobject<UPawnMovementComponent, UFloatingPawnMovement>(TEXT("MovementComponent"));
	MovementComponent->UpdatedComponent = BoxCollision;*/
	
}

// Called when the game starts or when spawned
void APacMan::BeginPlay()
{
	ghostEatStreak = 0;
	nbEaten = 0;
	score = 0;
	Super::BeginPlay();

	this->OnActorBeginOverlap.AddDynamic(this, &APacMan::OnCatchOverlapBegin);
	
	if (AAIController* aiController = Cast<AAIController>(Controller))
	{
		PlayerAI = aiController;
	}
	/*PlayerAI = GetWorld()->SpawnActor<AAIController>(MyAIControllerClass,FVector(0,0,0),FRotator(0,0,0),FActorSpawnParameters());

	
	isMoving = false;
	if (APlayerController* playerController = Cast<APlayerController>(Controller))
	{
		this->PlayerController = playerController;
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext,0);
		}
	}*/
	
}

// Called every frame
void APacMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if(CurrentTarget != nullptr && isMoving)
	{
		Move(Seek(CurrentTarget->GetActorLocation()));

	}*/


}

void APacMan::OnEat(int earnedScore, bool isPacGomme)
{
	if(isPacGomme)
	{
		nbEaten++;
		score+=earnedScore;
		FString stringScore = FString::FromInt(score);
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, stringScore);
	}
}

// Called to bind functionality to input
void APacMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	/*if(UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(UpAction,ETriggerEvent::Triggered,this,&APacMan::MoveUp);
		EnhancedInputComponent->BindAction(DownAction,ETriggerEvent::Triggered,this,&APacMan::MoveDown);
		EnhancedInputComponent->BindAction(LeftAction,ETriggerEvent::Triggered,this,&APacMan::MoveLeft);
		EnhancedInputComponent->BindAction(RightAction,ETriggerEvent::Triggered,this,&APacMan::MoveRight);
	}*/
}


void APacMan::OnCatchOverlapBegin(AActor* MyActor, AActor* OtherActor)
{
	if(auto ghost = Cast<AGhost>(OtherActor))
	{
		if(ghost->inFleeMode && !ghost->isDeadMode)
		{
			ghost->isDeadMode;
			score+= 200*pow(2,ghostEatStreak);
			ghostEatStreak++;
		}
		else
		{
			//pacman loses life
		}
	}
}

void APacMan::MoveUp()
{
	
	if (UpCorner != nullptr)
	{
		//Controller->UnPossess();
		isMoving = true;
		CurrentTarget = UpCorner;
		//PlayerAI->Possess(this);
		PlayerAI->MoveToLocation(UpCorner->GetActorLocation(),0,false);
		//Move(Seek(UpCorner->GetActorLocation()));
		
	}
}

void APacMan::MoveDown()
{
	if (DownCorner != nullptr)
	{
		//Controller->UnPossess();
		isMoving = true;
		CurrentTarget = DownCorner;
		//PlayerAI->Possess(this);
		PlayerAI->MoveToLocation(DownCorner->GetActorLocation(),0,false);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
		//Move(Seek(DownCorner->GetActorLocation()));
		
		
	}
}

void APacMan::MoveLeft()
{
	if (LeftCorner != nullptr)
	{
		//Controller->UnPossess();
		isMoving = true;
		CurrentTarget = LeftCorner;
		//PlayerAI->Possess(this);
		PlayerAI->MoveToLocation(LeftCorner->GetActorLocation(),0,false);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
		//Move(Seek(LeftCorner->GetActorLocation()));
	
	}
}

void APacMan::MoveRight()
{
	if (RightCorner != nullptr)
	{
		//Controller->UnPossess();
		isMoving = true;
		CurrentTarget = RightCorner;
		//PlayerAI->Possess(this);
		PlayerAI->MoveToLocation(RightCorner->GetActorLocation(),0,false);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
		//Move(Seek(RightCorner->GetActorLocation()));
		
	}
}

