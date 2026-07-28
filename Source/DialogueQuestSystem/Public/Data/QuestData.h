#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Structs/QuestObjective.h"
#include "QuestData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DIALOGUEQUESTSYSTEM_API UQuestData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Quest")
    FText QuestName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Quest")
    FText Description;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Quest")
    TArray<FQuestObjective> Objectives;

};
