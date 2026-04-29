// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FSAgentInfo.h"
#include "UBaseGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class BIRDOFPREY_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
TArray<FSAgentInfo> PlayerAgentInfo;

UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
void SetPlayerAgentInfoFor(int32 PlayerControllerID, FSAgentInfo AgentInfo);
    
UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
FSAgentInfo GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& Success);
};
