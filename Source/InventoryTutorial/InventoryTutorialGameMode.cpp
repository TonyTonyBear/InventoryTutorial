// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "InventoryTutorialGameMode.h"
#include "InventoryTutorialHUD.h"
#include "InventoryTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInventoryTutorialGameMode::AInventoryTutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInventoryTutorialHUD::StaticClass();
}
