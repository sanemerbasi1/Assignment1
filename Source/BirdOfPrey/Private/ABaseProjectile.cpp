// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseProjectile.h"

// Sets default values
ABaseProjectile::ABaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ABaseProjectile::InitialiseProjectile_Implementation(FVector Direction, float Speed)
{
	Direction = FVector::ZeroVector;
	Speed = 0.0f;
	return false;
}

bool ABaseProjectile::DealDamageTo_Implementation(AActor* Damaging, float InDamage)
{
	Damaging = nullptr;
	InDamage = 0.0f;
	return false;
}

bool ABaseProjectile::OnHit_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
	OverlappedComponent = nullptr;
	OtherActor = nullptr;
	return false;
}

ECollisionChannel ABaseProjectile::GetInstigatorCollisionChannel_Implementation()
{
	return ECollisionChannel::ECC_Pawn;
}

bool ABaseProjectile::CheckForGroundUnitTarget_Implementation()
{
	return false;
}

bool ABaseProjectile::ShouldCheckForGroundTarget_Implementation()
{
	return false;	
}

bool ABaseProjectile::AdjustToTarget_Implementation()
{
	return false;
}

bool ABaseProjectile::IsEnemyProjectile_Implementation()
{
	return false;
}

bool ABaseProjectile::AdjustToDesiredZ_Implementation()
{
	return false;
}
