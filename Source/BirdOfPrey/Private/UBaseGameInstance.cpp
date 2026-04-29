// Fill out your copyright notice in the Description page of Project Settings.


#include "UBaseGameInstance.h"
#include "FSAgentInfo.h"

void UBaseGameInstance::SetPlayerAgentInfoFor(int32 PlayerControllerID, FSAgentInfo AgentInfo)
{
    
}

FSAgentInfo UBaseGameInstance::GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& Success)
{
    PlayerControllerID = 0;
    Success = false; 

    return FSAgentInfo(); 
}