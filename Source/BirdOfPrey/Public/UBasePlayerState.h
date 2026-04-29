// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "UBasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBasePlayerState : public APlayerState
{
	GENERATED_BODY()
	public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float PlayerScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	int32 RemainingLives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float TimeOfLastDeath;
	
	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void HasRemainingLives(bool& ReturnValue);
};
