// Fill out your copyright notice in the Description page of Project Settings.


#include "UBaseGameMode.h"

void AUBaseGameMode::GetWorldScrollVelocity(FVector& ScrollVelocity)
{
 ScrollVelocity = FVector::ZeroVector;;
}

void AUBaseGameMode::GetWorldCameraActor(class AActor*& WorldCameraActor) //AWorldCameraActor
{
    WorldCameraActor = nullptr;
}

void AUBaseGameMode::OnPlayerDied(class AUBasePlayerController* PlayerController)
{
    PlayerController = nullptr;
}

void AUBaseGameMode::OnEnemyDied(class ABaseGameAgent* Enemy, class AController* Killer)
{
    Enemy = nullptr;
    Killer = nullptr;
}

void AUBaseGameMode::StartGame()
{

}

void AUBaseGameMode::EndGame(bool Success)
{
  Success = false;
}

void AUBaseGameMode::SpawnEnemyFrom(TArray<TSubclassOf<class ABaseGameAgent>> ClassList)
{
   
}

void AUBaseGameMode::ResetGame()
{

}

void AUBaseGameMode::RespawnPlayer()
{

}

void AUBaseGameMode::TrySpawnPowerUp(FVector Location)
{
 Location = FVector::ZeroVector;
}

void AUBaseGameMode::GetDistanceTravelled(float& ReturnValue)
{
 ReturnValue = 0.0f;
}

