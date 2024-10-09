// Fill out your copyright notice in the Description page of Project Settings.


#include "AEatable/AEatables.h"

#include "Components/SphereComponent.h"

// Sets default values
AAEatables::AAEatables()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<USphereComponent>("ShpereCollision");
	RootComponent = BoxCollision;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(BoxCollision);
}

// Called when the game starts or when spawned
void AAEatables::BeginPlay()
{
	Super::BeginPlay();
	this->OnActorBeginOverlap.AddDynamic(this, &AAEatables::OnOverlap);
}

// Called every frame
void AAEatables::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAEatables::OnOverlap(AActor* MyActor, AActor* OtherActor)
{
	OnEat(OtherActor);
	this->Destroy();
	
}

void AAEatables::OnEat(AActor* OtherActor)
{
}



