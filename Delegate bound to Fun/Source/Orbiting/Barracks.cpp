// Fill out your copyright notice in the Description page of Project Settings.


#include "Barracks.h"

#include "BarracksUnit.h"

// Sets default values
ABarracks::ABarracks()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>("BuildingMesh");

	SpawnPoint = CreateDefaultSubobject<UParticleSystemComponent>("SpawnPoint");

	SpawnInterval = 3;

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh '/Engine/BasicShapes/Cube.Cube' "));
	if (MeshAsset.Object!=nullptr)
	{
		BuildingMesh->SetStaticMesh(MeshAsset.Object);
	}

	auto cusParticleSystem = ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("ParticleSystem'/Engine/Tutorial/SubEditors/TutorialAssets/TutorialParticleSystem.TutorialParticleSystem' "));
	if (cusParticleSystem.Object!=nullptr)
	{
		SpawnPoint->SetTemplate(cusParticleSystem.Object);
	}

	SpawnPoint->SetRelativeScale3D(FVector(0.5,0.5,0.5));

	UintToSpawn = ABarracksUnit::StaticClass();//BarracksUnit预计被指定成Char类
	
}

void ABarracks::SpawnUnit()
{
	FVector cusSpawnLocation = SpawnPoint->GetComponentLocation();//获得粒子组件的世界坐标

	GetWorld()->SpawnActor(UintToSpawn, &cusSpawnLocation);//在该坐标处生成UintToSpawn
}


// Called when the game starts or when spawned
void ABarracks::BeginPlay()
{
	Super::BeginPlay();

	RootComponent = BuildingMesh;
	SpawnPoint->AttachTo(RootComponent);
	SpawnPoint->SetRelativeLocation(FVector(450, 0, 0));
	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &ABarracks::SpawnUnit, SpawnInterval, true);


	
}

void ABarracks::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
}

// Called every frame
void ABarracks::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

