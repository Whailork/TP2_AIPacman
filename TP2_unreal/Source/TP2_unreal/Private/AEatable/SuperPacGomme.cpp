// Fill out your copyright notice in the Description page of Project Settings.


#include "AEatable/SuperPacGomme.h"

#include "PacMan.h"
#include "Ghost/Ghost.h"

ASuperPacGomme::ASuperPacGomme()
{
	
}
void ASuperPacGomme::OnEat(AActor* OtherActor)
{
	if (auto pacman = Cast<APacMan>(OtherActor))
	{
		pacman->OnEat(scoreValue,true);
		pacman->inFleeMode = true;
		for (auto actor : GetLevel()->Actors)
		{
			if(auto ghost = Cast<AGhost>(actor))
			{
				ghost->setFleeMode(true);
			}
			
		}
	}
}