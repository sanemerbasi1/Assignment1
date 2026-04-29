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

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void PlayFireEffect();

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void GetFireEffectSpawnTransform(FTransform& ReturnValue);

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void HasFinishedFiring(bool& ReturnValue);

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void IsFiring(bool& ReturnValue);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
