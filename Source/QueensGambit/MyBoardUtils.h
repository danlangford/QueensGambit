// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "./TilePlace.h"
#include "MyBoardUtils.generated.h"

/**
 * 
 */
UCLASS()
class QUEENSGAMBIT_API UMyBoardUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
    
    UFUNCTION(BlueprintCallable, Category="My Board Utils")
    static void MyMagicFunction(FString someString);

    UFUNCTION(BlueprintCallable, Category="My Board Utils")
    static TArray<UTilePlace*> CalculateBoard(TSubclassOf<class AActor> whitePieceActor, TSubclassOf<class AActor> blackPieceActor);
    
    UFUNCTION(BlueprintPure, Category="My Board Utils")
    static TSubclassOf<class AActor> GetActorClass(UTilePlace* place);
    
    UFUNCTION(BlueprintPure, Category="My Board Utils")
    static FTransform GetTransform(UTilePlace* place);
	
};
