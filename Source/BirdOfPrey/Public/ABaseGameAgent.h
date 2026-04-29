// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FSAgentInfo.h"
#include "ABaseGameAgent.generated.h"

//class ABaseWeapon;

UCLASS()
class BIRDOFPREY_API ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:

	// Sets default values for this pawn's properties
	ABaseGameAgent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	class ABaseWeapon* Weapon; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	TSubclassOf<class ABaseWeapon> DefaultWeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float OutOfBoundsCheckTolerance;
 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	FName WeaponSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	EAttachmentRule WeaponAttachRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	FVector TargetLocation;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey") 
	void ChangeWeaponType(TSubclassOf<class ABaseWeapon> NewWeaponType);

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void GetWeaponSpawnTransform(FTransform& SpawnTransform);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StopFire();

	using APawn::TakeDamage;
	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void TakeDamage(float Damage, float& ActualDamage);

	UFUNCTION(BlueprintPure, Category = "BirdsOfPrey")
	void IsAlive(bool& Alive);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void Died(class AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ApplyAgentInfo(FSAgentInfo NewAgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void PlayDeathEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void CheckForOutOfBounds();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
