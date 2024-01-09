// Fill out your copyright notice in the Description page of Project Settings.


#include "Gold.h"

// Sets default values
AGold::AGold() : Amount(0)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GoldStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Static Mesh Component");
	GoldStaticMeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AGold::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGold::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

