// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine//Canvas.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class MYFPS_API AFPSHUD : public AHUD
{
	GENERATED_BODY()
protected:
	// 绘制在中心
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CrosshairTexture;
public:
	// 调用
	virtual void DrawHUD() override;

	
};
