// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TPAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class CHARACTER_API UTPAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Stat")
	float GroundSpeed;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Stat")
	bool ShouldMove;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Stat")
	bool IsFalling;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Stat")
	FVector Velocity;
};
