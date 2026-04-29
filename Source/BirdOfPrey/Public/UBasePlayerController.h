// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UBasePlayerController.generated.h"

class AController;
/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBasePlayerController : public APlayerController
{
	GENERATED_BODY()

	public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	bool bDiedWhileFiring;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void CalcScreenDimensions();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void OnPlayerDeath(class AController* Killer);
};
