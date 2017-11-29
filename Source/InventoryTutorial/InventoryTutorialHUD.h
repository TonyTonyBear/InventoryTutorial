// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InventoryTutorialHUD.generated.h"

UCLASS()
class AInventoryTutorialHUD : public AHUD
{
	GENERATED_BODY()

public:
	AInventoryTutorialHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

