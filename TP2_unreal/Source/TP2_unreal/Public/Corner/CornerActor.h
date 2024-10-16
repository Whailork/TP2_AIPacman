// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CornerActor.generated.h"

UCLASS()
class TP2_UNREAL_API ACornerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACornerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere)
	FVector PositionActuelle;

	UPROPERTY(EditAnywhere)
	bool ContinueOnContact = false;

	UPROPERTY(EditAnywhere, Category = Corner, BlueprintReadWrite)
	TArray<ACornerActor*> NeighborsArray;
	UPROPERTY(EditAnywhere, Category = Corner)
	ACornerActor* UpCorner;
	UPROPERTY(EditAnywhere, Category = Corner)
	ACornerActor* DownCorner;
	UPROPERTY(EditAnywhere, Category = Corner)
	ACornerActor* LeftCorner;
	UPROPERTY(EditAnywhere, Category = Corner)
	ACornerActor* RightCorner;

	void AddNeighborCorner(ACornerActor* neighbor);
	UFUNCTION()
	void OnOverlap(AActor* MyActor, AActor* OtherActor);

	//void HandleScatterMode(AGhostCharacter* ghost, AActor* MyActor); #include "Ghost/GhostCharacter.h"
};
