// Fill out your copyright notice in the Description page of Project Settings.


#include "Blueprints/TP_AnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UTP_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ACharacter* Pawn = Cast<ACharacter>(TryGetPawnOwner());

	if (IsValid(Pawn))
	{
		Velocity = Pawn->GetCharacterMovement()->Velocity;
		GroundSpeed = Pawn->GetCharacterMovement()->Velocity.Size2D();
		ShouldMove = (GroundSpeed > 3.0f) && UKismetMathLibrary::NotEqual_VectorVector(Pawn->GetCharacterMovement()->GetCurrentAcceleration(), FVector::ZeroVector, 0);
		IsFalling = Pawn->GetCharacterMovement()->IsFalling();
	}
}
