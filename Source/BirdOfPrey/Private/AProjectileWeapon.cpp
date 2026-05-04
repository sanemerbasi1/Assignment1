// Fill out your copyright notice in the Description page of Project Settings.


#include "AProjectileWeapon.h"

void AProjectileWeapon::SpawnProjectile_Implementation(FTransform SpawnTransform, class ABaseProjectile*& ReturnValue)
{
    return;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform_Implementation(int32 ShotNumber)
{
    return FTransform::Identity;
}

bool AProjectileWeapon::ReadyToFire_Implementation()
{
    return true;
}