#pragma once

#include "CoreMinimal.h"
#include "Enums/ObjectiveType.h"
#include "QuestObjective.generated.h"

USTRUCT(BlueprintType)
struct FQuestObjective
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
    FText Description;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
    EObjectiveType ObjectiveType = EObjectiveType::Kill;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
    FName TargetID;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
    int32 RequiredAmount = 1;
};