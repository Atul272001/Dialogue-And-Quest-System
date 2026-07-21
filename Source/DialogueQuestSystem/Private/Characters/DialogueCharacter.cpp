// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/DialogueCharacter.h"

// Sets default values
ADialogueCharacter::ADialogueCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADialogueCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADialogueCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADialogueCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

