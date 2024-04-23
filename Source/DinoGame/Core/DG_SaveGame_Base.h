// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DG_SaveGame_Base.generated.h"

/**
 * 
 */
UCLASS()
class DINOGAME_API UDG_SaveGame_Base : public USaveGame
{
	GENERATED_BODY()
	
	public:

	// Time of day index.
	UPROPERTY(BlueprintReadWrite, Category = "SaveGame")
	int32 TimeOfDayIndex = 0;
};
