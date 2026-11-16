// Copyright Epic Games, Inc. All Rights Reserved.

#include "ConexionArduinoGameMode.h"
#include "ConexionArduinoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AConexionArduinoGameMode::AConexionArduinoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
