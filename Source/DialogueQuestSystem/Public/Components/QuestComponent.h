// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/QuestData.h"
#include "QuestComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestAccepted, const UQuestData*, Quest);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestCompleted, const UQuestData*, Quest);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DIALOGUEQUESTSYSTEM_API UQuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UQuestComponent();

	UFUNCTION(BlueprintCallable)
	bool AcceptQuuest(UQuestData* Quest);

	UFUNCTION(BlueprintCallable)
	bool CompleteQuest(UQuestData* Quest);

	UFUNCTION(BlueprintPure)
	bool HasQuest(const UQuestData* Quest) const;

	UPROPERTY(BlueprintAssignable)
	FOnQuestAccepted OnQuestAccepted;

	UPROPERTY(BlueprintAssignable)
	FOnQuestCompleted OnQuestCompleted;

private:

	UPROPERTY()
	TArray<TObjectPtr<UQuestData>> ActiveQuests;
};
