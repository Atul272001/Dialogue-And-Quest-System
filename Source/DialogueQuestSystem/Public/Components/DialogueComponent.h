// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/DialogueData.h"
#include "DialogueComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DIALOGUEQUESTSYSTEM_API UDialogueComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDialogueComponent();

	void StartDialogue();

	void NextDialogue();

	void EndDialogue();

	const FDialogueLine* GetCurrentDialogue() const;

	FORCEINLINE bool IsDialogueActive() const
	{
		return bIsDialogueActive;
	}

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dialogue", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UDialogueData> DialogueData;

	int32 CurrentDialogueIndex = 0;

	bool bIsDialogueActive = false;
};
