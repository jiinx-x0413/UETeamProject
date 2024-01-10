// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TP_PC.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class MYPROJECT_API ATP_PC : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	TObjectPtr<UInputMappingContext> DefaultIMC;

	virtual void BeginPlay() override;
	
};
