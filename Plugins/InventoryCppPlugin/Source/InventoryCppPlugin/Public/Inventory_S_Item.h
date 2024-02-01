// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "Engine/StaticMesh.h"
#include "Inventory_E_Item_Types.h"
#include "Inventory_S_Item.generated.h"

USTRUCT(BlueprintType)
struct FInventory_S_Item
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY()
	FString Name;

	UPROPERTY()
	UTexture* Icon;

	UPROPERTY()
	UStaticMesh* Static_Mesh;

	UPROPERTY()
	EItemTypes Types;

	UPROPERTY()
	int PlayerStateIndex;

	UPROPERTY()
	int ItemIndex;

	UPROPERTY()
	int RequiredLevel;

	UPROPERTY()
	int Damage;

	UPROPERTY()
	int Armour;

	UPROPERTY()
	int Gold;

	UPROPERTY()
	int Price;

	UPROPERTY()
	int Heal;

	UPROPERTY()
	int Luck;

	UPROPERTY()
	int Intelligence;

	UPROPERTY()
	int Cooltime;

	UPROPERTY()
	int Mana;
};
