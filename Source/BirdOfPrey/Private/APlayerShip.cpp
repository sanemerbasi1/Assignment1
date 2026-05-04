// Fill out your copyright notice in the Description page of Project Settings.


#include "APlayerShip.h"

void AAPlayerShip::GetShipConstantVelocity_Implementation(FVector& Direction, float& Speed)
{
    return;
}

bool AAPlayerShip::ClampToCameraBounds_Implementation()
{
    return false;
}

float AAPlayerShip::GetShipAxisAdjustment_Implementation(float Dist, float Max)
{
   return 0.0f;
}

void AAPlayerShip::CalcOutOfBoundsAdjustment_Implementation(FVector& Adjustment)
{
    return;
}

bool AAPlayerShip::GetPlayerAgentInfo_Implementation(class AUBasePlayerController* Player)
{
    return false;
}


bool AAPlayerShip::ShouldSpawnAIController_Implementation()
{
    return false;
}

bool AAPlayerShip::UpdateHoverPitch_Implementation()
{
    return false;
}

bool AAPlayerShip::HasDiedRecently_Implementation()
{
    return false;
}
