// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SlashGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SLASHWORLD_API ASlashGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	void RequestRespawn(ACharacter* SlashCharacter,AController* PlayerController);

	UPROPERTY()
	AActor* StartSpot = nullptr;
};
