// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_Level_NormelMonster.h"

// Sets default values
AAI_Level_NormelMonster::AAI_Level_NormelMonster()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAI_Level_NormelMonster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAI_Level_NormelMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAI_Level_NormelMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

