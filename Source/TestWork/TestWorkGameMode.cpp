// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestWorkGameMode.h"
#include "TestWorkHUD.h"
#include "TestWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestWorkGameMode::ATestWorkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestWorkHUD::StaticClass();
}
