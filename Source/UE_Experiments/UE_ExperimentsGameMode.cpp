// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_ExperimentsGameMode.h"
#include "UE_ExperimentsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_ExperimentsGameMode::AUE_ExperimentsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
