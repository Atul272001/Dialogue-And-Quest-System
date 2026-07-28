// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/QuestComponent.h"

// Sets default values for this component's properties
UQuestComponent::UQuestComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

bool UQuestComponent::AcceptQuuest(UQuestData* Quest)
{
	if (!Quest)
		return false;

	if (HasQuest(Quest))
		return false;

	ActiveQuests.Add(Quest);

	OnQuestAccepted.Broadcast(Quest);

	return true;
}

bool UQuestComponent::CompleteQuest(UQuestData* Quest)
{
	if(!Quest)
		return false;

	if (!ActiveQuests.Remove(Quest))
		return false;

	OnQuestCompleted.Broadcast(Quest);

	return true;
}

bool UQuestComponent::HasQuest(const UQuestData* Quest) const
{
	return ActiveQuests.Contains(Quest);
}

