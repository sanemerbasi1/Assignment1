// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "UBaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBaseAIController : public AAIController
{
	GENERATED_BODY()
	public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")	
	class AUBasePlayerController* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class ABaseGameAgent* ControlledAgent;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool SelectAttack();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool AimAt(FVector AimTarget);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool CheckFire();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool UpdateAim();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "BirdsOfPrey")
	bool ShouldStartFire();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "BirdsOfPrey")
	bool ShouldStopFire();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool StartFire();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool StopFire();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "BirdsOfPrey")
	bool ShouldUpdateAim();

};
