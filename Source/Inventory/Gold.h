// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemInterface.h"
#include "Gold.generated.h"

class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class INVENTORY_API AGold : public AActor, public IItemInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGold();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//varaiable
public:
	int32 Amount;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "StaticMesh")
	TObjectPtr<UStaticMeshComponent> GoldStaticMeshComponent;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "StaticMesh")
	TObjectPtr<USceneComponent> SceneComponent;
};
