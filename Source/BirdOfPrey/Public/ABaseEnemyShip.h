// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseShip.h"
#include "ABaseEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()
	public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class ABaseShipAIController* ShipAIController;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey") 
	void Move();
};
