// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"
// #include "ThirdParty/Steamworks/Steamv139/sdk/public/steam/steam_api.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
    
    // Just to indicate the game and game output log have started
    UE_LOG(LogTemp, Warning, TEXT("game started!"));
	
    // if (SteamAPI_Init())
    // {
    //     const char* name = SteamFriends()->GetPersonaName();
    //     GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, name);
    // }
    // else
    // {
    //     //push an error or something
    // }
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

