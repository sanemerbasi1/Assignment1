// Fill out your copyright notice in the Description page of Project Settings.


#include "APlayerShip.h"

void AAPlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed)
{
    Direction = FVector::ZeroVector;
    Speed = 0.0f; 
}

void AAPlayerShip::ClampToCameraBounds()
{

}

void AAPlayerShip::GetShipAxisAdjustment(float Dist, float Max, float& ReturnValue)
{
    ReturnValue = 0.0f; 
}

void AAPlayerShip::CalcOutOfBoundsAdjustment(FVector& ReturnValue)
{
    ReturnValue = FVector::ZeroVector; 
}

void AAPlayerShip::GetPlayerAgentInfo(class AUBasePlayerController* Player)
{
  Player = nullptr;
}

void AAPlayerShip::ShouldSpawnAIController()
{
  
}

void AAPlayerShip::UpdateHoverPitch()
{

}

void AAPlayerShip::HasDiedRecently(bool& ReturnValue)
{
    ReturnValue = false; 
}
