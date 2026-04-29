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
void ABaseWeapon::StartFire()
{
	
}

void ABaseWeapon::StopFire()
{
	
}

void ABaseWeapon::PlayFireEffect()
{
	
}

void ABaseWeapon::GetFireEffectSpawnTransform(FTransform& ReturnValue)
{
	ReturnValue = FTransform::Identity;
}

void ABaseWeapon::HasFinishedFiring(bool& ReturnValue)
{
	ReturnValue = false;
}

void ABaseWeapon::IsFiring(bool& ReturnValue)
{
	ReturnValue = false;
}
