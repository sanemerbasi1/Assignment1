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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	void GetWorldScrollVelocity(FVector& ScrollVelocity);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	void GetWorldCameraActor(class AActor*& OutWorldCameraActor);  //AWorldCameraActor

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool OnPlayerDied(class AUBasePlayerController* PlayerController); 

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool OnEnemyDied(class ABaseGameAgent* Enemy, class AController* Killer); 

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool StartGame();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool EndGame(bool Success);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool SpawnEnemyFrom(const TArray<TSubclassOf<class ABaseGameAgent>>& ClassList); 

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool ResetGame();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool RespawnPlayer();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	float GetDistanceTravelled();


};
