// Fill out your copyright notice in the Description page of Project Settings.


#include "UBaseGameMode.h"

void AUBaseGameMode::GetWorldScrollVelocity_Implementation(FVector& ScrollVelocity)
{
 ScrollVelocity = FVector::ZeroVector;;
}

void AUBaseGameMode::GetWorldCameraActor_Implementation(class AActor*& WorldCameraActor) //AWorldCameraActor
{
    WorldCameraActor = nullptr;
}

bool AUBaseGameMode::OnPlayerDied_Implementation(class AUBasePlayerController* PlayerController)
{
    PlayerController = nullptr;
    return false;
}

bool AUBaseGameMode::OnEnemyDied_Implementation(class ABaseGameAgent* Enemy, class AController* Killer)
{
    Enemy = nullptr;
    Killer = nullptr;
    return false;
}

bool AUBaseGameMode::StartGame_Implementation()
{
    return false;
}

bool AUBaseGameMode::EndGame_Implementation(bool Success)
{
  Success = false;
  return false;
}

bool AUBaseGameMode::SpawnEnemyFrom_Implementation(const TArray<TSubclassOf<class ABaseGameAgent>>& ClassList)
{
    return false;
}

bool AUBaseGameMode::ResetGame_Implementation()
{
    return false;
}

bool AUBaseGameMode::RespawnPlayer_Implementation()
{
    return false;
}

bool AUBaseGameMode::TrySpawnPowerUp_Implementation(FVector Location)
{
 Location = FVector::ZeroVector;
 return false;
}

float AUBaseGameMode::GetDistanceTravelled_Implementation()
{
 return 0.0f;
}

