// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TestWorkHUD.generated.h"

UCLASS()
class ATestWorkHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATestWorkHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

