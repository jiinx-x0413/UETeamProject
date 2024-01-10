// Fill out your copyright notice in the Description page of Project Settings.


#include "Blueprints/TP_Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATP_Character::ATP_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(RootComponent);
	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	GetMesh()->SetRelativeLocation(FVector(0,0,-GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));
	GetMesh()->SetRelativeRotation(FRotator(0,-90.0f,0));
}

// Called when the game starts or when spawned
void ATP_Character::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ATP_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATP_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* UIEA = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (UIEA)
	{
		UIEA->BindAction(IA_TP_Jump, ETriggerEvent::Completed, this, &ATP_Character::Jump);
		UIEA->BindAction(IA_TP_Jump, ETriggerEvent::Canceled, this, &ATP_Character::StopJumping);

		UIEA->BindAction(IA_TP_Move, ETriggerEvent::Triggered, this, &ATP_Character::Move);
		UIEA->BindAction(IA_TP_Look, ETriggerEvent::Triggered, this, &ATP_Character::Look);
		UIEA->BindAction(IA_TP_LeftMouse, ETriggerEvent::Triggered, this, &ATP_Character::LeftMouse);

		UIEA->BindAction(IA_TP_Skill1, ETriggerEvent::Triggered, this, &ATP_Character::Skill1);
		UIEA->BindAction(IA_TP_Skill2, ETriggerEvent::Triggered, this, &ATP_Character::Skill2);
		UIEA->BindAction(IA_TP_Skill3, ETriggerEvent::Triggered, this, &ATP_Character::Skill3);
		UIEA->BindAction(IA_TP_Skill4, ETriggerEvent::Triggered, this, &ATP_Character::Skill4);
		UIEA->BindAction(IA_TP_Skill5, ETriggerEvent::Triggered, this, &ATP_Character::Skill5);

		UIEA->BindAction(IA_TP_ItemQ, ETriggerEvent::Triggered, this, &ATP_Character::ItemE);
		UIEA->BindAction(IA_TP_ItemE, ETriggerEvent::Triggered, this, &ATP_Character::ItemQ);

		UIEA->BindAction(IA_TP_Reload, ETriggerEvent::Triggered, this, &ATP_Character::Reload);

		UIEA->BindAction(IA_TP_Ability, ETriggerEvent::Triggered, this, &ATP_Character::Ability);


		UIEA->BindAction(IA_TP_Inventory, ETriggerEvent::Triggered, this, &ATP_Character::Inventory);

		UIEA->BindAction(IA_TP_SkillInventory, ETriggerEvent::Triggered, this, &ATP_Character::SkillInventory);
		
	}

}

void ATP_Character::Move(const FInputActionValue& Value)
{
	FVector2D Dir = Value.Get<FVector2D>();

	FRotator CameraRotation = GetControlRotation();
	FRotator DirectionRotation = FRotator(0, CameraRotation. Yaw,0);

	FVector FowardVector = UKismetMathLibrary::GetForwardVector(DirectionRotation);
	FVector RightVector = UKismetMathLibrary::GetRightVector(DirectionRotation);

	AddMovementInput(FowardVector, Dir.Y);
	AddMovementInput(RightVector, Dir.X);

}

void ATP_Character::Look(const FInputActionValue& Value)
{
	FVector2D Rotation = Value.Get<FVector2D>();

	AddControllerYawInput(Rotation.X);
	AddControllerPitchInput(Rotation.Y);
}

void ATP_Character::LeftMouse(const FInputActionValue& Value)
{
}

void ATP_Character::Skill1(const FInputActionValue& Value)
{
}

void ATP_Character::Skill2(const FInputActionValue& Value)
{
}

void ATP_Character::Skill3(const FInputActionValue& Value)
{
}

void ATP_Character::Skill4(const FInputActionValue& Value)
{
}

void ATP_Character::Skill5(const FInputActionValue& Value)
{
}

void ATP_Character::ItemE(const FInputActionValue& Value)
{
}

void ATP_Character::ItemQ(const FInputActionValue& Value)
{
}

void ATP_Character::Reload(const FInputActionValue& Value)
{
}

void ATP_Character::Ability(const FInputActionValue& Value)
{
}

void ATP_Character::Inventory(const FInputActionValue& Value)
{
}

void ATP_Character::SkillInventory(const FInputActionValue& Value)
{
}
