// Fill out your copyright notice in the Description page of Project Settings.


#include "TPCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATPCharacter::ATPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(RootComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	GetMesh()->SetRelativeLocation(FVector(0, 0, -GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));
	GetMesh()->SetRelativeRotation(FRotator(0, -90.0f, 0));

}

// Called when the game starts or when spawned
void ATPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* UIEA = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (UIEA)
	{
		UIEA->BindAction(IA_TP_Jump, ETriggerEvent::Completed, this, &ATPCharacter::Jump);
		UIEA->BindAction(IA_TP_Jump, ETriggerEvent::Canceled, this, &ATPCharacter::StopJumping);

		UIEA->BindAction(IA_TP_Move, ETriggerEvent::Triggered, this, &ATPCharacter::Move);
		UIEA->BindAction(IA_TP_Look, ETriggerEvent::Triggered, this, &ATPCharacter::Look);
		UIEA->BindAction(IA_TP_LeftMouse, ETriggerEvent::Triggered, this, &ATPCharacter::LeftMouse);

		UIEA->BindAction(IA_TP_Skill1, ETriggerEvent::Triggered, this, &ATPCharacter::Skill1);
		UIEA->BindAction(IA_TP_Skill2, ETriggerEvent::Triggered, this, &ATPCharacter::Skill2);
		UIEA->BindAction(IA_TP_Skill3, ETriggerEvent::Triggered, this, &ATPCharacter::Skill3);
		UIEA->BindAction(IA_TP_Skill4, ETriggerEvent::Triggered, this, &ATPCharacter::Skill4);
		UIEA->BindAction(IA_TP_Skill5, ETriggerEvent::Triggered, this, &ATPCharacter::Skill5);
		UIEA->BindAction(IA_TP_Skill5, ETriggerEvent::Triggered, this, &ATPCharacter::SkillShift);

		UIEA->BindAction(IA_TP_ItemQ, ETriggerEvent::Triggered, this, &ATPCharacter::ItemE);
		UIEA->BindAction(IA_TP_ItemE, ETriggerEvent::Triggered, this, &ATPCharacter::ItemQ);

		UIEA->BindAction(IA_TP_Reload, ETriggerEvent::Triggered, this, &ATPCharacter::Reload);

		UIEA->BindAction(IA_TP_Ability, ETriggerEvent::Triggered, this, &ATPCharacter::Ability);


		UIEA->BindAction(IA_TP_Inventory, ETriggerEvent::Triggered, this, &ATPCharacter::Inventory);

		UIEA->BindAction(IA_TP_SkillInventory, ETriggerEvent::Triggered, this, &ATPCharacter::SkillInventory);

	}

}


void ATPCharacter::Move(const FInputActionValue& Value)
{
	FVector2D Dir = Value.Get<FVector2D>();

	FRotator CameraRotation = GetControlRotation();
	FRotator DirectionRotation = FRotator(0, CameraRotation.Yaw, 0);

	FVector FowardVector = UKismetMathLibrary::GetForwardVector(DirectionRotation);
	FVector RightVector = UKismetMathLibrary::GetRightVector(DirectionRotation);

	AddMovementInput(FowardVector, Dir.Y);
	AddMovementInput(RightVector, Dir.X);

}

void ATPCharacter::Look(const FInputActionValue& Value)
{
	FVector2D Rotation = Value.Get<FVector2D>();

	AddControllerYawInput(Rotation.X);
	AddControllerPitchInput(Rotation.Y);
}

void ATPCharacter::LeftMouse(const FInputActionValue& Value)
{
}

void ATPCharacter::Skill1(const FInputActionValue& Value)
{
}

void ATPCharacter::Skill2(const FInputActionValue& Value)
{
}

void ATPCharacter::Skill3(const FInputActionValue& Value)
{
}

void ATPCharacter::Skill4(const FInputActionValue& Value)
{
}

void ATPCharacter::Skill5(const FInputActionValue& Value)
{
}

void ATPCharacter::SkillShift(const FInputActionValue& Value)
{
}

void ATPCharacter::ItemE(const FInputActionValue& Value)
{
}

void ATPCharacter::ItemQ(const FInputActionValue& Value)
{
}

void ATPCharacter::Reload(const FInputActionValue& Value)
{
}

void ATPCharacter::Ability(const FInputActionValue& Value)
{
}

void ATPCharacter::Inventory(const FInputActionValue& Value)
{
}

void ATPCharacter::SkillInventory(const FInputActionValue& Value)
{
}
