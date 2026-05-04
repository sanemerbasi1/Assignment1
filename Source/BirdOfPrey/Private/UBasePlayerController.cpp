// Fill out your copyright notice in the Description page of Project Settings.


#include "UBasePlayerController.h"

bool AUBasePlayerController::CalcScreenDimensions_Implementation()
{
    return true;
}

bool AUBasePlayerController::OnPlayerDeath_Implementation(class AController* Killer)
{
    Killer = nullptr;
    return true;
}