// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerInput.h"

#include "Warrior.generated.h"

UCLASS()
class COOKTRAIN_API AWarrior : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWarrior();

	/*FInputAxisKeyMapping backkey("Back", EKeys::S, 1.0f);
	FInputActionKeyMapping jump("Jump", EKeys::SpaceBar, 0, 0, 0, 0);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(backkey);
	UPlayerInput::AddEngineDefinedActionMapping(jump);*/

	UPROPERTY()
	FInputActionKeyMapping Tiao;

	void Forward(float amount);
	void Back(float amount);
	void Right(float amount);
	void Left(float amount);

	UFUNCTION(BlueprintNativeEvent, Category = Collision)
		void OnOverlapsBegin(UPrimitiveComponent* Comp,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult&SweepResult);
	UFUNCTION(BlueprintNativeEvent, Category = Collision)
		void OnOverlapsEnd(UPrimitiveComponent* Comp,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);


	virtual void PostInitializeComponents() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//最后一帧的输入
	FVector2D lastInput;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
