// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuzzleBlockGridNative.generated.h"

UCLASS()
class QUEENSGAMBIT_API APuzzleBlockGridNative : public AActor
{
	GENERATED_BODY()

private:
	template<class T>
	T * SpawnActor(UClass * ActorClass, FVector Location)
	{
		return Cast<T>(GetWorld()->SpawnActor(ActorClass, &Location));
	}

public:	
	// Sets default values for this actor's properties
	APuzzleBlockGridNative();

	//Properties accessible from editor

	UPROPERTY(EditAnywhere, noclear, BlueprintReadWrite, Category = GameMode)
	TSubclassOf<class AActor> DarkTileClass;

	UPROPERTY(EditAnywhere, noclear, BlueprintReadWrite, Category = GameMode)
	TSubclassOf<class AActor> LightTileClass;

	UPROPERTY(EditAnywhere, noclear, BlueprintReadWrite, Category = GameMode)
	uint8 Dimension;

	UPROPERTY(EditAnywhere, noclear, BlueprintReadWrite, Category = GameMode)
	float PieceScale;

	UPROPERTY(EditAnywhere, noclear, BlueprintReadWrite, Category = GameMode)
	FVector BoardPosition;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};


