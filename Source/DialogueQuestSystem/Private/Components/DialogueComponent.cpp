// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/DialogueComponent.h"

// Sets default values for this component's properties
UDialogueComponent::UDialogueComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UDialogueComponent::StartDialogue()
{
	if (!DialogueData || DialogueData->DialogueLines.IsEmpty())
		return;

	CurrentDialogueIndex = 0;
	bIsDialogueActive = true;
}

void UDialogueComponent::NextDialogue()
{
	if (!bIsDialogueActive || !DialogueData)
		return;

	++CurrentDialogueIndex;

	if (DialogueData->DialogueLines.IsValidIndex(CurrentDialogueIndex))
		EndDialogue();
}

void UDialogueComponent::EndDialogue()
{
	bIsDialogueActive = false;
	CurrentDialogueIndex = 0;
}

const FDialogueLine* UDialogueComponent::GetCurrentDialogue() const
{
	if (!DialogueData)
		return nullptr;

	if (!DialogueData->DialogueLines.IsValidIndex(CurrentDialogueIndex))
		return nullptr;

	return &DialogueData->DialogueLines[CurrentDialogueIndex];
}

