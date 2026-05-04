// Fill out your copyright notice in the Description page of Project Settings.


#include "UBaseGameInstance.h"
#include "FSAgentInfo.h"

bool UBaseGameInstance::SetPlayerAgentInfoFor_Implementation(int32 PlayerControllerID, FSAgentInfo AgentInfo)
{
   return false;
}

FSAgentInfo UBaseGameInstance::GetPlayerAgentInfoFor_Implementation(int32 PlayerControllerID, bool& Success)
{
    return FSAgentInfo(); 
}