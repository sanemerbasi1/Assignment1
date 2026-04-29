// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "UBaseGameMode.generated.h"


class UDataTable;
class AController;

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBaseGameMode : public AGameMode
{
	GENERATED_BODY()
	public:

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey") //AWorldCameraActor
	class AActor* WorldCameraActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	class UDataTable* PlayerAgentInfoTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float RespawnDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float SpanwOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	TArray<TSubclassOf<class AABasePowerup>> PowerUpList;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	bool IsGameOverScreen;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void GetWorldScrollVelocity(FVector& ScrollVelocity);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void GetWorldCameraActor(class AActor*& OutWorldCameraActor);  //AWorldCameraActor

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void OnPlayerDied(class AUBasePlayerController* PlayerController); 

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void OnEnemyDied(class ABaseGameAgent* Enemy, class AController* Killer); 

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void EndGame(bool Success);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void SpawnEnemyFrom(TArray<TSubclassOf<class ABaseGameAgent>> ClassList); 

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void GetDistanceTravelled(float& ReturnValue);


};
