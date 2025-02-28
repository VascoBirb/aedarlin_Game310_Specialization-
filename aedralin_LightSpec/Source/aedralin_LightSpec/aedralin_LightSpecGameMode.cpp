// Copyright Epic Games, Inc. All Rights Reserved.

#include "aedralin_LightSpecGameMode.h"
#include "aedralin_LightSpecCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aaedralin_LightSpecGameMode::Aaedralin_LightSpecGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
