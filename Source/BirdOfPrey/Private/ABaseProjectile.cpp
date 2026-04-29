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

void ABaseProjectile::InitialiseProjectile(FVector Direction, float Speed)
{
	Direction = FVector::ZeroVector;
	Speed = 0.0f;
}

void ABaseProjectile::DealDamageTo(AActor* Damaging, float InDamage)
{
	Damaging = nullptr;
	InDamage = 0.0f;
}

void ABaseProjectile::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
	OverlappedComponent = nullptr;
	OtherActor = nullptr;
}

void ABaseProjectile::GetInstigatorCollisionChannel(TEnumAsByte<ECollisionChannel>& ReturnValue)
{
	ReturnValue = ECollisionChannel::ECC_Pawn;
}

void ABaseProjectile::CheckForGroundUnitTarget()
{
	
}

void ABaseProjectile::ShouldCheckForGroundTarget(bool& ReturnValue)
{
	ReturnValue = false;
}

void ABaseProjectile::AdjustToTarget()
{
	
}

void ABaseProjectile::IsEnemyProjectile(bool& ReturnValue)
{
	ReturnValue = false;
}

void ABaseProjectile::AdjustToDesiredZ()
{
	
}
