// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UBaseAIController.h"
#include "ABaseShipAIController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABaseShipAIController : public AUBaseAIController
{
	GENERATED_BODY()
	public:

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void GetMoveTarget(FVector& MoveTarget);
};
