// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseWeapon.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
bool ABaseWeapon::StartFire_Implementation()
{
	return false;
}

bool ABaseWeapon::StopFire_Implementation()
{
	return false;
}

bool ABaseWeapon::PlayFireEffect_Implementation()
{
	return false;
}

 FTransform ABaseWeapon::GetFireEffectSpawnTransform_Implementation()
{
	return FTransform::Identity;
}

bool ABaseWeapon::HasFinishedFiring_Implementation()
{
	return false;
}

bool ABaseWeapon::IsFiring_Implementation()
{
	return false;
}
