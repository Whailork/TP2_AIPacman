// Fill out your copyright notice in the Description page of Project Settings.


#include "AEatable/SuperPacGomme.h"

#include "PacMan.h"

ASuperPacGomme::ASuperPacGomme()
{
	
}
void ASuperPacGomme::OnEat(AActor* OtherActor)
{
	if (auto pacman = Cast<APacMan>(OtherActor))
	{
		pacman->OnEat(scoreValue,true);
		//TODO : set ghosts to flee mode
	}
}