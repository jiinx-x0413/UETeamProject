// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "Engine/StaticMesh.h"
#include "Inventory_S_Inventory.generated.h"

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

USTRUCT(BlueprintType)
struct FInventory_S_Inventory
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
	EItemTypes types;

	UPROPERTY()
	int PlayerStateIndex;

	UPROPERTY()
	int ItemIndex;
};
