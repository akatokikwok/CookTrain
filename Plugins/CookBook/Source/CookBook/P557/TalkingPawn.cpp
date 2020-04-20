// Fill out your copyright notice in the Description page of Project Settings.


#include "TalkingPawn.h"
#include "Talker.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/DefaultPawn.h"

ATalkingPawn::ATalkingPawn():Super()
{
	
	PrimaryActorTick.bCanEverTick=true;

	TalkCollider = CreateDefaultSubobject<UBoxComponent>("TalkCollider");
	TalkCollider->SetBoxExtent(FVector(200, 200, 100));

	TalkCollider->OnComponentBeginOverlap.AddDynamic(this, &ATalkingPawn::OnTalkOverlap);//OnComponentBeginOverlap是一个委托实例

	TalkCollider->AttachToComponent(RootComponent,FAttachmentTransformRules::KeepRelativeTransform,NAME_None);
}

void ATalkingPawn::OnTalkOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	auto cusClass=OtherActor->GetClass();
	if (cusClass->ImplementsInterface(UTalker::StaticClass()))
	{
		ITalker::Execute_StartTalking(OtherActor);
	}
}
