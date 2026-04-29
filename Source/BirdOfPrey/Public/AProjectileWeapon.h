// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseWeapon.h"
#include "AProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()
	public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	TSubclassOf<class ABaseProjectile> ProjectileType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float RefireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	int32 NumShots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float DesiredZ;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void SpawnProjectile(FTransform SpawnTransform, class ABaseProjectile*& ReturnValue);

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void GetProjectileSpawnTransform(int32 ShotNumber, FTransform& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ReadyToFire(bool& ReturnValue);
};
