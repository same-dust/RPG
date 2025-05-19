// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/SlashGameModeBase.h"
#include "Characters/SlashCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"

void ASlashGameModeBase::RequestRespawn(ACharacter* SlashCharacter, AController* PlayerController)
{
	if (SlashCharacter)
	{
		SlashCharacter->Reset();
		SlashCharacter->Destroy();
	}
	TArray<AActor*> PlayerStarts;
	UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);

	StartSpot = PlayerStarts.Num() > 0 ? PlayerStarts[0] : StartSpot;
	if (PlayerController && StartSpot)
	{
		RestartPlayerAtPlayerStart(PlayerController, StartSpot);
	}
}
