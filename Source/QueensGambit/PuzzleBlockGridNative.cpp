// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleBlockGridNative.h"

// Sets default values
APuzzleBlockGridNative::APuzzleBlockGridNative()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APuzzleBlockGridNative::BeginPlay()
{
	Super::BeginPlay();

	float totalScale = PieceScale * Dimension;
	float halfScale = totalScale / 2;
	
	for (int i = 0; i < Dimension; i++)
	{
		for (int j = 0; j < Dimension; j++)
		{
			float x = -halfScale + j * PieceScale;
			float y = -halfScale + i * PieceScale;
			FVector position;
			position.Set(x, y, 0);
			position += BoardPosition;
			if ((i + j) % 2)
			{
				//Need to figure out how to get the actual type of the blueprint class so we can set the owning Grid
				AActor* actor = SpawnActor<AActor>(DarkTileClass.Get(), position);
			}
			else
			{
				AActor* actor = SpawnActor<AActor>(LightTileClass.Get(), position);
			}
		}
	}
}

// Called every frame
void APuzzleBlockGridNative::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

