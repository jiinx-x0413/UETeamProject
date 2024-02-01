// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Inventory_ItemInterface.h"
#include "Inventory_ItemPS.generated.h"

struct FInventory_S_Item;
struct FInventory_S_Inventory;

/**
 *
 */
UCLASS()
class INVENTORYCPPPLUGIN_API AInventory_ItemPS :  public APlayerState
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
	int Money;

	UPROPERTY()
	int HP;

	UPROPERTY()
	int MP;

	UPROPERTY()
	TArray<FInventory_S_Item> ItemData;

	UPROPERTY()
	TArray<FInventory_S_Inventory> InventoryData;


};
