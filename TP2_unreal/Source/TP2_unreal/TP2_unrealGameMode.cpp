// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP2_unrealGameMode.h"
#include "TP2_unrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATP2_unrealGameMode::ATP2_unrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
