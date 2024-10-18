// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Corner/CornerActor.h"
#include "EntityCharacter.generated.h"

UCLASS()
class TP2_UNREAL_API AEntityCharacter : public APawn
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "PacManReferenceInEntity")
	class APacMan* PacManReference;

	UPROPERTY(Category = Pawn, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UPawnMovementComponent* MovementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere, Category = "coin")
	TArray<ACornerActor*> coinsScatter;

public:
	// Sets default values for this character's properties
	AEntityCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	void MoveTo(FVector Location);
	FVector Seek(FVector Target);

	void SetPacmanReference();
	APacMan* GetPacmanReference();
};
