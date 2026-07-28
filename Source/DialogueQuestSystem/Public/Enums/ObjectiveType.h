#pragma once

#include "ObjectiveType.generated.h"

UENUM(BlueprintType)
enum class EObjectiveType : uint8
{
    Kill        UMETA(DisplayName = "Kill"),
    Collect     UMETA(DisplayName = "Collect"),
    Talk        UMETA(DisplayName = "Talk"),
    Interact    UMETA(DisplayName = "Interact")
};