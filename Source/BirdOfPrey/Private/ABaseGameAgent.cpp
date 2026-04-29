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

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType)
{
	NewWeaponType = nullptr;
}

void ABaseGameAgent::GetWeaponSpawnTransform(FTransform& SpawnTransform)
{
	SpawnTransform = FTransform();
}

void ABaseGameAgent::SpawnDefaultWeapon()
{
	
}

void ABaseGameAgent::StartFire()
{
	
}

void ABaseGameAgent::StopFire()
{
	
}

void ABaseGameAgent::TakeDamage(float Damage, float& ActualDamage)
{
 Damage = 0.0f;
 ActualDamage = 0.0f;	
}

void ABaseGameAgent::IsAlive(bool& Alive)
{
 Alive = false;	
}

void ABaseGameAgent::Died(AController* Killer)
{
	Killer = nullptr;
}

void ABaseGameAgent::PlayHitEffects()
{
	
}

void ABaseGameAgent::CleanUp()
{
	
}
void ABaseGameAgent::ApplyAgentInfo(FSAgentInfo NewAgentInfo)
{
	NewAgentInfo = FSAgentInfo();
}

void ABaseGameAgent::AimAt(FVector Target)
{
	Target = FVector::ZeroVector;
}

void ABaseGameAgent::PlayDeathEffects()
{
	
}

void ABaseGameAgent::CheckForOutOfBounds()
{
	
}