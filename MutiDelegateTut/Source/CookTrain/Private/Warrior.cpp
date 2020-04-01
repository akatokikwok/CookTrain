// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior.h"

#include "GameFramework/PlayerInput.h"

// Sets default values
AWarrior::AWarrior()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	lastInput=FVector2D::ZeroVector;

	
}

void AWarrior::Forward(float amount)
{
	//AddMovementInput(GetActorForwardVector(),amount);
	lastInput.Y += amount;
}

void AWarrior::Back(float amount)
{
	//AddMovementInput(-GetActorForwardVector(), amount);
	lastInput.Y -= amount;
}

void AWarrior::Right(float amount)
{
	//AddMovementInput(GetActorRightVector(), amount);
	lastInput.X += amount;
}

void AWarrior::Left(float amount)
{
	//AddMovementInput(-GetActorRightVector(), amount);
	lastInput.X -= amount;
}

// Called when the game starts or when spawned
void AWarrior::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWarrior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float len = lastInput.Size();
	if (len>1.0f)
	{
		lastInput/=len;
	}
	AddMovementInput(GetActorForwardVector(), lastInput.Y);
	AddMovementInput(GetActorRightVector(), lastInput.X);	lastInput=FVector2D(0,0);

}

// Called to bind functionality to input
void AWarrior::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &AWarrior::Forward);
	PlayerInputComponent->BindAxis("Back",this,&AWarrior::Back);
	PlayerInputComponent->BindAxis("Right", this, &AWarrior::Right);
	PlayerInputComponent->BindAxis("Left", this, &AWarrior::Left);

	/*无需input设置而直接利用FInputActionKeymapping类 绑定键位的设计模式*/
	FInputActionKeyMapping jump("hasx", EKeys::SpaceBar, 0, 0, 0, 0);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddActionMapping(jump);
	PlayerInputComponent->BindAction("hasx",IE_Pressed,this,&AWarrior::Jump);

}

