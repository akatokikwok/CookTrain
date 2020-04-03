// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Camera/CameraComponent.h"
#include "OrbitingMovementComponent.generated.h"

/*构造一个能使父级Actor围绕中心旋转的套件*/
UCLASS( Blueprintable,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COOKTRAIN_API UOrbitingMovementComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOrbitingMovementComponent();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Custom")
	float RotationRate;
	UPROPERTY()
	bool bRotateToFaceOutside;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom")
	float OrbitDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom")
	UCameraComponent* cusSubCamera;
	
	float CurrJiaodu;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
