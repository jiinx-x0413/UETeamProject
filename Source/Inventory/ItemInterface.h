// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"

enum class eItem
{
	Gold
	,Cash
	,Equipment
};

UINTERFACE(Blueprintable)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

class INVENTORY_API IItemInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Interface")
	void DropItem();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Interface")
	void TakeItem();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Interface")
	void BuyItem();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Interface")
	void SellItem();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Interface")
	void CombineItem();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Item Interface")
	void TradeItem();

};
