// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory_InventoryData.h"
#include "../Public/Inventory_S_Inventory.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AInventory_InventoryData::AInventory_InventoryData()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInventory_InventoryData::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInventory_InventoryData::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AInventory_InventoryData::TakeItemData_Implementation(FInventory_S_Inventory InputInventoryData)
{
	InputInventoryData.ItemIndex = InventoryData.Num();
	;
	//InputInventoryData.PlayerStateIndex = APlayerState::GetPlayerId;
	InventoryData.Add(InputInventoryData);

}

void AInventory_InventoryData::DropItemData_Implementation(int ItemIndex)
{
	//UWorld* world = GetWorld();
	//FActorSpawnParameters?spawnParams;
	//FRotator?rotator;
	//FVector?spawnLocation? = FVector::ZeroVector;
	//UKismetMathLibrary::RandomFloatInRange

	//world->SpawnActor<Inventory_BP_Item>(Inventory_BP_Item::StaticClass(), spawnLocation, rotator, spawnParams);
}

void AInventory_InventoryData::UseItemData_Implementation(int ItemIndex)
{
}

