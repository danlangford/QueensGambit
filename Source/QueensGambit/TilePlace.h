// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TilePlace.generated.h"

/**
 * 
 */
UCLASS()
class QUEENSGAMBIT_API UTilePlace : public UObject
{
    
    GENERATED_BODY()
    
public:
	UTilePlace();
    UTilePlace(TSubclassOf<class AActor> actor, FTransform transform);
	~UTilePlace();
    
    TSubclassOf<class AActor> getActor();
    void setActor(TSubclassOf<class AActor> actor);
    FTransform getTransform();
    void setTransform(FTransform transform);
    
private:
    TSubclassOf<class AActor> actor_;
    FTransform transform_;
};
