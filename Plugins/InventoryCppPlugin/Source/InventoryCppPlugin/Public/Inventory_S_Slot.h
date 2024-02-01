// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Inventory_S_Slot.generated.h"

USTRUCT(BlueprintType)
struct FInventory_S_Slot
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY()
	FDataTableRowHandle Item;

	
};

