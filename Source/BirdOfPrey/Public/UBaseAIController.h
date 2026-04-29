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

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void SelectAttack();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void ShouldStartFire(bool& ReturnValue);

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void ShouldStopFire(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StopFire();

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void ShouldUpdateAim(bool& ReturnValue);

};
