// Fill out your copyright notice in the Description page of Project Settings.


#include "UBasePlayerState.h"

bool AUBasePlayerState::AddScore_Implementation(float Amount)
{
    PlayerScore = 0.0f;
    return true;
}

bool AUBasePlayerState::ConsumeLife_Implementation()
{
    return true;
}

bool AUBasePlayerState::HasRemainingLives_Implementation()
{
    return false;
}