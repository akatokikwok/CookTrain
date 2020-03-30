// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSHud.h"

#include "RTSSelectAndMove.h"


#include "RTSSelectAndMoveCharacter.h"
FVector2D ARTSHud::GetMousePos2D()
{
	float PosX;
	float PosY;
	GetOwningPlayerController()->GetMousePosition(PosX, PosY);

	return FVector2D(PosX, PosY);
}

void ARTSHud::DrawHUD()
{
	if (bStartSelecting==true)
	{

		if (FoundActors.Num() > 0)
		{
			for (int32 i = 0; i < FoundActors.Num(); i++)
			{
				FoundActors[i]->SetDeSelected();
			}
		}
		FoundActors.Empty();

		CurrentPoint = GetMousePos2D();
		DrawRect(
			FLinearColor(0,0,1,.15f),InitialPoint.X,InitialPoint.Y,
			(CurrentPoint.X-InitialPoint.X),(CurrentPoint.Y-InitialPoint.Y)
		);

		GetActorsInSelectionRectangle<ARTSSelectAndMoveCharacter>(InitialPoint, CurrentPoint, FoundActors,false, false);

		if (FoundActors.Num()>0)
		{
			for (int32 i=0;i<FoundActors.Num();i++)
			{
				FoundActors[i]->SetSelected();
			}
		}
	}
}
