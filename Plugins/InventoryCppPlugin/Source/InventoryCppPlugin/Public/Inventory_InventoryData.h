// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Inventory_ItemInterface.h"
#include "Blueprint/UserWidget.h"
#include "Inventory_InventoryData.generated.h"

// Forward declarations
struct FInventory_S_Inventory;
//struct FInventory_S_Item;

UCLASS()
class INVENTORYCPPPLUGIN_API AInventory_InventoryData : public AActor, public IInventory_ItemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInventory_InventoryData();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//inherit
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TakeItemData(FInventory_S_Inventory InputInventoryData);

	virtual void TakeItemData_Implementation(FInventory_S_Inventory InputInventoryData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DropItemData(int ItemIndex);

	virtual void DropItemData_Implementation(int ItemIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UseItemData(int ItemIndex);

	virtual void UseItemData_Implementation(int ItemIndex);

	//variable
public:
	UPROPERTY()
	TArray<FInventory_S_Inventory> InventoryData;

	//UPROPERTY()
	//TArray<FInventory_S_Item> EquipmentData;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//TSubclassOf<class UUserWidget> WBP_InventoryClass;

	//UPROPERTY(BlueprintReadWrite)
	//UUserWidget* WBP_InventoryWidget;
};
