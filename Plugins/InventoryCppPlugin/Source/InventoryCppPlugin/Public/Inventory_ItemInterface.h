// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Inventory_S_Inventory.h"
#include "Inventory_ItemInterface.generated.h"



// This class does not need to be modified.
UINTERFACE(Blueprintable)
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
	void TakeItemData(FInventory_S_Inventory InputInventoryData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DropItemData(int ItemIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UseItemData(int ItemIndex);

};
