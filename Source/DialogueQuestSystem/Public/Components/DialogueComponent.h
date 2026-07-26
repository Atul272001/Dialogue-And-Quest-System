// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/DialogueData.h"
#include "DialogueComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogueLineChanged, const FDialogueLine&, DialogueLine);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogueStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogueEnded);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DIALOGUEQUESTSYSTEM_API UDialogueComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDialogueComponent();

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void Interact();

	UFUNCTION(BlueprintCallable)
	void StartDialogue();

	UFUNCTION(BlueprintCallable)
	void NextDialogue();

	UFUNCTION(BlueprintCallable)
	void EndDialogue();

	const FDialogueLine* GetCurrentDialogueLine() const;

	FORCEINLINE bool IsDialogueActive() const
	{
		return bIsDialogueActive;
	}

	FORCEINLINE const UDialogueData* GetDialogueData() const
	{
		return DialogueData;
	}

	UPROPERTY(BlueprintAssignable, Category = "Dialogue")
	FOnDialogueStarted OnDialogueStarted;

	UPROPERTY(BlueprintAssignable, Category = "Dialogue")
	FOnDialogueEnded OnDialogueEnded;

	UPROPERTY(BlueprintAssignable, Category = "Dialogue")
	FOnDialogueLineChanged OnDialogueLineChanged;

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dialogue", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UDialogueData> DialogueData;

	int32 CurrentDialogueIndex = 0;

	bool bIsDialogueActive = false;
};
