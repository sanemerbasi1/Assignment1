// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseShip.h"
#include "APlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AAPlayerShip : public ABaseShip
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	class AUBasePlayerController* PlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float InvulnerabilityTime;

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void GetShipAxisAdjustment(float Dist, float Max, float& ReturnValue);

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void CalcOutOfBoundsAdjustment(FVector& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void GetPlayerAgentInfo(class AUBasePlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void HasDiedRecently(bool& ReturnValue);
	
};
