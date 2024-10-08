// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Corner/CornerActor.h"
#include "GameFramework/Pawn.h"
#include "PacMan.generated.h"

UCLASS()
class TP2_UNREAL_API APacMan : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* StaticMesh;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UPawnMovementComponent* MovementComponent;

public:
	UPROPERTY(EditAnywhere, Category = Corner)
	ACornerActor* UpCorner;
	UPROPERTY(EditAnywhere, Category = Corner)
	ACornerActor* DownCorner;
	UPROPERTY(EditAnywhere, Category = Corner)
	ACornerActor* LeftCorner;
	UPROPERTY(EditAnywhere, Category = Corner)
	ACornerActor* RightCorner;
	bool isMoving;
	// Sets default values for this pawn's properties
	APacMan();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveTo(FVector Location);
	FVector Seek(FVector Target);
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputMappingContext* DefaultMappingContext;
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputAction* UpAction;
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputAction* DownAction;
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputAction* LeftAction;
	UPROPERTY(EditDefaultsOnly, Category= Input)
	class UInputAction* RightAction;
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
};
