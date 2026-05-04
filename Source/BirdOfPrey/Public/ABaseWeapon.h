// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABaseWeapon.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	bool bRequiredAimForAI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	bool bIsAutomatic;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool StartFire();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool StopFire();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool PlayFireEffect();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "BirdsOfPrey")
	FTransform GetFireEffectSpawnTransform();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "BirdsOfPrey")
	bool HasFinishedFiring();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "BirdsOfPrey")
	bool IsFiring();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
