// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "Engine/StaticMesh.h"
#include "Inventory_E_Item_Types.h"
#include "Inventory_S_Inventory.generated.h"

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
	EItemTypes Types;

	UPROPERTY()
	int PlayerStateIndex;

	UPROPERTY()
	int ItemIndex;
};
