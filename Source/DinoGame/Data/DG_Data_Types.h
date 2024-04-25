#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"

#include "DG_Data_Types.generated.h"

/**
 * Struct for holding a dialogue line and the tag that identifies the response to that line.
 */
USTRUCT(BlueprintType)
struct FDG_DialogueLineResponse : public FTableRowBase
{
	GENERATED_BODY()

public:
	// Tags required on the player in order for this response to be available.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer RequiredPlayerTags;

	// The line of dialogue.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DialogLine;

	// The tag identifying the response to this line.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag ResponseTag;
};

/**
 * Data table row holding dialogue lines with associated tags.
 */
USTRUCT(BlueprintType)
struct FDG_DialogueLine : public FTableRowBase
{
	GENERATED_BODY()

public:
	// This is how the row is identified in the data table.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag IDTag;

	// These gameplay tags must be present on the player in order for this line to be spoken.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer RequiredPlayerTags;

	// The line of dialogue that the NPC will say.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText NPCLine;

	// A map of the player's dialog options (if any) and the NPC's response to those options.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag, FDG_DialogueLineResponse> PlayerLineOptions;

	// Tags to apply to the player when this line is spoken (if any).
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer TagsToApplyToPlayer;

	// ID of next line to play after this one (if PlayerLineOptions is empty).
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag NextLineID;
};

/**
 * Data table row holding clue data.
 */
USTRUCT(BlueprintType)
struct FDG_ClueData : public FTableRowBase
{
	GENERATED_BODY()

public:
	// This is how the row is identified in the data table.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag IDTag;

	// User-friendly name for the clue.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ClueName;

	// The clue text.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ClueText;

	// Tags to apply to the player when this clue is found.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer TagsToApplyToPlayer;

	// Image asset to use for this clue.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ClueImage;
};
