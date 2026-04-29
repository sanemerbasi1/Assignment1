// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"
#include "ABaseProjectile.generated.h"


UCLASS()
class BIRDOFPREY_API ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float ProjectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	class UParticleSystem* DetonationEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float GroundUnitCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float GroundUnitCheckAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	class ABaseGameAgent* GroundTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float DesiredZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	class USoundBase* ImpactSound;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void InitialiseProjectile(FVector Direction, float Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void DealDamageTo(class AActor* Damaging, float InDamage);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void OnHit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor);

    UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void GetInstigatorCollisionChannel(TEnumAsByte<ECollisionChannel>& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ShouldCheckForGroundTarget(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void IsEnemyProjectile(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void AdjustToDesiredZ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
