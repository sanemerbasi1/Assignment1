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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	void SpawnProjectile(FTransform SpawnTransform, class ABaseProjectile*& ReturnValue);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	FTransform GetProjectileSpawnTransform(int32 ShotNumber);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool ReadyToFire();
};
