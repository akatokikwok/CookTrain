// Fill out your copyright notice in the Description page of Project Settings.


#include "PostBeginplay.h"
#include "Engine/Engine.h"

// Add default functionality here for any IPostBeginplay functions that are not pure virtual.

void IPostBeginplay::OnPostBeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "PostBeginPlay called");

}
