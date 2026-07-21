#pragma once

#include "CoreMinimal.h"
#include "DialogueLine.generated.h"

USTRUCT(BlueprintType)
struct FDialogueLine
{
	GENERATED_BODY();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FText SpeakerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FText DailogueText;
};