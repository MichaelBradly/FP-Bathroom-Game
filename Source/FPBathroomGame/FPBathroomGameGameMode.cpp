// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPBathroomGame.h"
#include "FPBathroomGameGameMode.h"
#include "FPBathroomGameHUD.h"
#include "FPBathroomGameCharacter.h"

AFPBathroomGameGameMode::AFPBathroomGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPBathroomGameHUD::StaticClass();
}
