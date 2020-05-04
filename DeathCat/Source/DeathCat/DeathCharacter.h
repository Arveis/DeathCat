// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "DeathCharacter.generated.h"

UENUM(BlueprintType)
enum EMovementDirection
{
	Up     UMETA(DisplayName = "Up"),
	Down   UMETA(DisplayName = "Down"),
	Left   UMETA(DisplayName = "Left"),
	Right  UMETA(DisplayName = "Right")
};
/**
 *
 */
UCLASS(config = Game)
class DEATHCAT_API ADeathCharacter : public APaperCharacter
{

	GENERATED_BODY()

		/** Side view camera */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	class UTextRenderComponent* TextComponent;
	//virtual void Tick(float DeltaSeconds) override;
protected:
	// The animation to play while running around
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* RunningAnimation;

	// The animation to play while idle (standing still)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* IdleAnimation;

	/** Called to choose the correct animation to play based on the character's movement state */
	//void UpdateAnimation();

	/** Called for side to side input */
//	void MoveRight(float Value);

	//void UpdateCharacter();

	// APawn interface
	//virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	ADeathCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UFUNCTION(BlueprintCallable)
		int32 GetMaxBulletCounter() const { return MaxBulletCounter; }

	UFUNCTION(BlueprintCallable)
		int32 GetCurrentBulletCounter() const { return CurrentBulletCounter; }

	UFUNCTION(BlueprintCallable)
		void SetCurrentBulletCounter(int32 DeltaBullets);

	UFUNCTION(BlueprintCallable)
		int32 GetMaxHP() const { return MaxHP; }

	UFUNCTION(BlueprintCallable)
		int32 GetCurrentHP() const { return CurrentHP; }

	UFUNCTION(BlueprintCallable)
		void SetCurrentHP(int32 DeltaHP);

	UFUNCTION(BlueprintCallable)
		void SetHP(int32 ValueHP);

	UFUNCTION(BlueprintCallable)
		bool IsPlayerDead() const { return bIsDead; }

	UFUNCTION(BlueprintCallable)
		void SwitchIsPlayerDead() { bIsDead = !IsPlayerDead(); }

	UFUNCTION(BlueprintCallable)
		bool IsEndOfLevel() const { return bIsEndOfLevel; }

	UFUNCTION(BlueprintCallable)
		void SwitchIsEndOfLevel() { bIsEndOfLevel = !IsEndOfLevel(); };

	UFUNCTION(BlueprintCallable)
		bool IsPlayerHit() const { return hittrue; }

	UFUNCTION(BlueprintCallable)
		void SwitchIsPlayerHit();

protected:
	UPROPERTY(EditAnywhere)
		int32 MaxBulletCounter = 10;

	int32 CurrentBulletCounter = 10;

	UPROPERTY(EditAnywhere)
		int32 MaxHP = 10;

	int32 CurrentHP = 10;

	UPROPERTY(EditAnywhere)
		bool hittrue = false;

	bool bIsDead = false;

	bool bIsEndOfLevel = false;

};
