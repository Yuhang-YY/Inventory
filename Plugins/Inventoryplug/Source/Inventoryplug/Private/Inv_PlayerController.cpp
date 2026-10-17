// Fill out your copyright notice in the Description page of Project Settings.


#include "Inv_PlayerController.h"

#include "Inventoryplug.h"

void AInv_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogInventory, Log, TEXT("AInv_PlayerController::BeginPlay()"));
}
