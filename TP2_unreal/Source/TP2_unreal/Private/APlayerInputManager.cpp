// Fill out your copyright notice in the Description page of Project Settings.


#include "APlayerInputManager.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "PacMan.h"

// Sets default values
AAPlayerInputManager::AAPlayerInputManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAPlayerInputManager::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i < GetLevel()->Actors.Num(); i++) {
		if (auto target = Cast<APacMan>(GetLevel()->Actors[i])) {
			pacman = target;

			break;
		}

	}
	
	if (APlayerController* playerController = Cast<APlayerController>(Controller))
    	{
    		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer()))
    		{
    			Subsystem->AddMappingContext(DefaultMappingContext,0);
    		}
    	}
	
}

// Called every frame
void AAPlayerInputManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAPlayerInputManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if(UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(UpAction,ETriggerEvent::Triggered,this,&AAPlayerInputManager::MoveUp);
		EnhancedInputComponent->BindAction(DownAction,ETriggerEvent::Triggered,this,&AAPlayerInputManager::MoveDown);
		EnhancedInputComponent->BindAction(LeftAction,ETriggerEvent::Triggered,this,&AAPlayerInputManager::MoveLeft);
		EnhancedInputComponent->BindAction(RightAction,ETriggerEvent::Triggered,this,&AAPlayerInputManager::MoveRight);
	}
}

void AAPlayerInputManager::MoveUp()
{
	if(!pacman->isMoving)
	{
		pacman->MoveUp();
	}

}

void AAPlayerInputManager::MoveDown()
{
	if(!pacman->isMoving)
	{
		pacman->MoveDown();
	}
	
}

void AAPlayerInputManager::MoveLeft()
{
	if(!pacman->isMoving)
	{
		pacman->MoveLeft();
	}
	
}

void AAPlayerInputManager::MoveRight()
{
	if(!pacman->isMoving)
	{
		pacman->MoveRight();
	}
	
}

