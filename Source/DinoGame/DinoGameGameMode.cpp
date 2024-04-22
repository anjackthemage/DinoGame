// Copyright Epic Games, Inc. All Rights Reserved.

#include "DinoGameGameMode.h"
#include "DinoGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADinoGameGameMode::ADinoGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
