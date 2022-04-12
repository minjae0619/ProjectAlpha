// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectAlphaGameMode.h"
#include "ProjectAlphaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectAlphaGameMode::AProjectAlphaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
