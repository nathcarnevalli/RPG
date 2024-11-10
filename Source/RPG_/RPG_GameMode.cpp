// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPG_GameMode.h"
#include "RPG_Character.h"
#include "UObject/ConstructorHelpers.h"

ARPG_GameMode::ARPG_GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
