// Fill out your copyright notice in the Description page of Project Settings.


#include "Blueprints/TP_PC.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

void ATP_PC::BeginPlay()
{
	Super::BeginPlay();
	UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (Subsystem && DefaultIMC)
	{
		Subsystem->AddMappingContext(DefaultIMC, 0);
	}

}
