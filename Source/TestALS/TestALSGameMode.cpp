// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestALSGameMode.h"
#include "TestALSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestALSGameMode::ATestALSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
