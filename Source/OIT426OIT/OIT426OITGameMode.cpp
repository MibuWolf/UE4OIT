// Copyright Epic Games, Inc. All Rights Reserved.

#include "OIT426OITGameMode.h"
#include "OIT426OITCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOIT426OITGameMode::AOIT426OITGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
