// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractingPawn.h"
#include "Camera/PlayerCameraManager.h"
#include "CollisionQueryParams.h"
#include "WorldCollision.h"
#include "Openable.h"
#include "Interactable.h"
#include "Components/InputComponent.h"
#include "GameFramework/PlayerController.h"

void AInteractingPawn::TryInteract()
{
	APlayerController* MyCtrol=Cast<APlayerController>(Controller);
	if (MyCtrol!=nullptr)
	{
		APlayerCameraManager* MyCameraManager=MyCtrol->PlayerCameraManager;

		FVector StarLoc=MyCameraManager->GetCameraLocation();
		FVector EndLoc=StarLoc+(MyCameraManager->GetActorForwardVector()*100);

		FHitResult Hitresult;
		GetWorld()->SweepSingleByObjectType(Hitresult,StarLoc,EndLoc,FQuat::Identity,
												FCollisionObjectQueryParams::AllObjects,
												FCollisionShape::MakeSphere(25),
											FCollisionQueryParams(FName("Interact"),true,this));
		UClass* jizhongClass=Hitresult.Actor->GetClass();
		if (jizhongClass!=nullptr)
		{
			if (jizhongClass->ImplementsInterface(UInteractable::StaticClass()))
			{
				if (IInteractable::Execute_Can_Interact(Hitresult.Actor.Get()))
				{
					IInteractable::Execute_PerformInteract(Hitresult.Actor.Get());
				}
			}
		}

	}
}

void AInteractingPawn::SetupPlayerInputComponent(UInputComponent* InInputComponent)
{
	Super::SetupPlayerInputComponent(InInputComponent);
	InInputComponent->BindAction("Interact", IE_Released, this,
		&AInteractingPawn::TryInteract);
}
