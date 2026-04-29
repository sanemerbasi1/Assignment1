// Fill out your copyright notice in the Description page of Project Settings.


#include "UBasePlayerState.h"

void AUBasePlayerState::AddScore(float Amount)
{
    PlayerScore = 0.0f;
}

void AUBasePlayerState::ConsumeLife()
{

}

void AUBasePlayerState::HasRemainingLives(bool& ReturnValue)
{
    ReturnValue = false;
}