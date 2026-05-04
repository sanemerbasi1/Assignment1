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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool ChangeWeaponType(TSubclassOf<class ABaseWeapon> NewWeaponType);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool GetWeaponSpawnTransform(FTransform& SpawnTransform);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool SpawnDefaultWeapon();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool StartFire();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool StopFire();

	using APawn::TakeDamage;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	void TakeDamage(float Damage, float& ActualDamage);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool IsAlive();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool Died(class AController* Killer);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool PlayHitEffects();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool CleanUp();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool ApplyAgentInfo(FSAgentInfo NewAgentInfo);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool AimAt(FVector AimTarget);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool PlayDeathEffects();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdsOfPrey")
	bool CheckForOutOfBounds();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
