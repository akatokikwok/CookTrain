// Fill out your copyright notice in the Description page of Project Settings.


#include "PostEditChangePropertyActor.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"
#include "../../../../../../../Program_Files/UnrealEngine-4.22/Engine/Source/Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\UnrealType.h"



APostEditChangePropertyActor::APostEditChangePropertyActor()
{
	PrimaryActorTick.bCanEverTick = true;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>
		(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	UStaticMeshComponent * SM = GetStaticMeshComponent();
	if (SM != nullptr)
	{
		if (MeshAsset.Object != nullptr)
		{
			SM->SetStaticMesh(MeshAsset.Object);
			SM->SetGenerateOverlapEvents(true);
		}
		SM->SetMobility(EComponentMobility::Movable);
	}
}

void APostEditChangePropertyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	//Super::PostEditChangeProperty(PropertyChangedEvent);


	if (PropertyChangedEvent.Property!=nullptr)
	{
		const FName PropertyName = PropertyChangedEvent.Property->GetFName() ;

		if (PropertyName==GET_MEMBER_NAME_CHECKED(APostEditChangePropertyActor, ShowStaticMesh))
		{
			UStaticMeshComponent* SM=GetStaticMeshComponent();

			if (SM!=nullptr)
			{
				SM->SetVisibility(ShowStaticMesh);
			}
		}
	}

	// 最后调用基类版本
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
