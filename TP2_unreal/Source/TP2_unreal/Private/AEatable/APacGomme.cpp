// Fill out your copyright notice in the Description page of Project Settings.


#include "AEatable/APacGomme.h"

#include "PacMan.h"

AAPacGomme::AAPacGomme()
{
	
}

void AAPacGomme::OnEat(AActor* OtherActor)
{
	if (auto pacman = Cast<APacMan>(OtherActor))
	{
		pacman->OnEat(scoreValue,true);
	}
}
