// Copyright Epic Games, Inc. All Rights Reserved.

#include "YMLSGameMode.h"
#include "YMLSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYMLSGameMode::AYMLSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
