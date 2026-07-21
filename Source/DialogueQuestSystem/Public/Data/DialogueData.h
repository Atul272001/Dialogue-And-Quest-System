// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Structs/DialogueLine.h"
#include "DialogueData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DIALOGUEQUESTSYSTEM_API UDialogueData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dialogue")
	TArray<FDialogueLine> DialogueLines;
};
