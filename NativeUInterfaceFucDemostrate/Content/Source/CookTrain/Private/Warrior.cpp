// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior.h"

#include "GameFramework/PlayerInput.h"
#include "CookTrainGameModeBase.h"
#include "..\Public\Warrior.h"
#include "GameFramework/Character.h"

#include "Components\CapsuleComponent.h"
//#include "D:\Work\UnrealEngine-4.22\Engine\Source\Runtime\Experimental\Chaos\Public\Chaos\Capsule.h"


//#include "Components\CapsuleComponent.h"
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


void AWarrior::OnOverlapsBegin_Implementation(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult&SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlaps warrior began"));
}

void AWarrior::OnOverlapsEnd_Implementation(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlaps warrior ended"));
}

void AWarrior::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (RootComponent)
	{
		GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AWarrior::OnOverlapsBegin);
		GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &AWarrior::OnOverlapsEnd);	}
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

	check(PlayerInputComponent);
	


	PlayerInputComponent->BindAxis("Forward", this, &AWarrior::Forward);
	PlayerInputComponent->BindAxis("Back",this,&AWarrior::Back);
	PlayerInputComponent->BindAxis("Right", this, &AWarrior::Right);
	PlayerInputComponent->BindAxis("Left", this, &AWarrior::Left);

	/*无需input设置而直接利用FInputActionKeymapping类 绑定键位的设计模式*/
	FInputActionKeyMapping Tiao("hasx", EKeys::SpaceBar, 0, 0, 0, 0);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddActionMapping(Tiao);
	PlayerInputComponent->BindAction("hasx",IE_Pressed,this,&AWarrior::Jump);



	/*获得当前GM和GM里的函数，并为输入绑定事件*/
	auto GameMode=Cast<ACookTrainGameModeBase>(GetWorld()->GetAuthGameMode());
	auto Func=&ACookTrainGameModeBase::ButtonClicked;
	if (GameMode&&Func)
	{
		PlayerInputComponent->BindAction("HotKey_UIButton_Spell",  IE_Pressed, GameMode, Func);
	}
}

