// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "TP_Character.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UInputAction;

UCLASS()
class MYPROJECT_API ATP_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATP_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Component")
	TObjectPtr<USpringArmComponent> SpringArmComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Component")
	TObjectPtr<UCameraComponent> CameraComponent;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Jump;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Move;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Look;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_LeftMouse;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Skill1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Skill2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Skill3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Skill4;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Skill5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_ItemQ;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_ItemE;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Inventory;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_SkillInventory;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Reload;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InputAction")
	TObjectPtr<UInputAction> IA_TP_Ability;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void LeftMouse(const FInputActionValue& Value);
	void Skill1(const FInputActionValue& Value);
	void Skill2(const FInputActionValue& Value);
	void Skill3(const FInputActionValue& Value);
	void Skill4(const FInputActionValue& Value);
	void Skill5(const FInputActionValue& Value);
	void ItemE(const FInputActionValue& Value);
	void ItemQ(const FInputActionValue& Value);
	void Reload(const FInputActionValue& Value);
	void Ability(const FInputActionValue& Value);


	void Inventory(const FInputActionValue& Value);
	void SkillInventory(const FInputActionValue& Value);
	

};
