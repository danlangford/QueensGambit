// Fill out your copyright notice in the Description page of Project Settings.


#include "MyOtherPawn.h"

// Sets default values
AMyOtherPawn::AMyOtherPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyOtherPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyOtherPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyOtherPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

