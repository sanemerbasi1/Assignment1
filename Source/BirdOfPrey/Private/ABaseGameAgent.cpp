// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseGameAgent.h"

// Sets default values
ABaseGameAgent::ABaseGameAgent()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool ABaseGameAgent::ChangeWeaponType_Implementation(TSubclassOf<ABaseWeapon> NewWeaponType)
{
	return false;
}

bool ABaseGameAgent::GetWeaponSpawnTransform_Implementation(FTransform& SpawnTransform)
{
	return true;
}

bool ABaseGameAgent::SpawnDefaultWeapon_Implementation()
{
	return true;
}

bool ABaseGameAgent::StartFire_Implementation()
{
	return true;
}

bool ABaseGameAgent::StopFire_Implementation()
{
	return true;
}

void ABaseGameAgent::TakeDamage_Implementation(float Damage, float& ActualDamage)
{
	return;
}

bool ABaseGameAgent::IsAlive_Implementation()
{	
 return true;
}

bool ABaseGameAgent::Died_Implementation(AController* Killer)
{
	return true;
}

bool ABaseGameAgent::PlayHitEffects_Implementation()
{
	return true;
}

bool ABaseGameAgent::CleanUp_Implementation()
{
	return true;
}
bool ABaseGameAgent::ApplyAgentInfo_Implementation(FSAgentInfo NewAgentInfo)
{
	return true;
}

bool ABaseGameAgent::AimAt_Implementation(FVector Target)
{
	return true;
}

bool ABaseGameAgent::PlayDeathEffects_Implementation()
{
	return true;
}

bool ABaseGameAgent::CheckForOutOfBounds_Implementation()
{
	return true;
}