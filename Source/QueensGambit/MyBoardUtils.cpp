// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBoardUtils.h"

void UMyBoardUtils::MyMagicFunction(FString someString)
{
    UE_LOG(LogTemp, Log, TEXT("you wanted to say %s"), *someString);
}

TArray<UTilePlace*> UMyBoardUtils::CalculateBoard(TSubclassOf<class AActor> whitePieceActor, TSubclassOf<class AActor> blackPieceActor)
{
    UE_LOG(LogTemp, Log, TEXT("calculating board"));

    TArray<UTilePlace*> Tiles;
    for(int i=0;i<8;i++) {
        for (int j=0;j<8;j++){
            bool isWhite=(i%2==j%2);
            UE_LOG(LogTemp, Log, TEXT("i=%s j=%s isWhite=%s"),i,j, isWhite);
            UTilePlace* place = NewObject<UTilePlace>();
            place->setActor(isWhite?whitePieceActor:blackPieceActor);
            place->setTransform(FTransform(FVector(0.f,0.f,0.f)));
            Tiles.Add(place);
        }
    }

    return Tiles;
}

TSubclassOf<class AActor> UMyBoardUtils::GetActorClass(UTilePlace* place)
{
    return nullptr;
}

FTransform UMyBoardUtils::GetTransform(UTilePlace* place)
{
    return place->getTransform();
}

