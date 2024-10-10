// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AEatables.generated.h"

UCLASS()
class TP2_UNREAL_API AAEatables : public AActor
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	class USphereComponent* BoxCollision;
	
	
public:	
	// Sets default values for this actor's properties
	AAEatables();
	UPROPERTY(EditAnywhere,Category = "score")
	int scoreValue;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()
	void OnOverlap(AActor* MyActor, AActor* OtherActor);
	virtual void OnEat(AActor* OtherActor);

};
