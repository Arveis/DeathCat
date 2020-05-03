// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DeathCatGameMode.h"
#include "DeathCatPlayerController.h"
#include "DeathCatCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADeathCatGameMode::ADeathCatGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADeathCatPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}