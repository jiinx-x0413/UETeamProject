// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Inventory_ItemInterface.generated.h"

UENUM(BlueprintType)
enum class EItemTypes : uint8
{
	Sword    UMETA(DisplayName = "Sword")
	, Wand    UMETA(DisplayName = "Wand")
	, Gun    UMETA(DisplayName = "Gun")
	, Mace    UMETA(DisplayName = "Mace")
	, Armour    UMETA(DisplayName = "Armour")
	, Book    UMETA(DisplayName = "Book")
	, Neckless    UMETA(DisplayName = "Neckless")
	, Ring    UMETA(DisplayName = "Ring")
	, HealingPotion    UMETA(DisplayName = "HealingPotion")
	, Gold    UMETA(DisplayName = "Gold")
	, Tower    UMETA(DisplayName = "Tower")
	, ManaPotion   UMETA(DisplayName = "ManaPotion")

};

struct S_Inventory
{
	FString Name;
	FTexture Icon;
	UStaticMesh Static_Mesh;
	EItemTypes types;
	int PlayerStateIndex;
	int ItemIndex;
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInventory_ItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INVENTORYCPPPLUGIN_API IInventory_ItemInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TakeItemData(S_Inventory InventoryData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DropItemData(int ItemIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UseItemData(int ItemIndex);

};
