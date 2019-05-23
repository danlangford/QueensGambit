// Fill out your copyright notice in the Description page of Project Settings.


#include "TilePlace.h"


UTilePlace::UTilePlace()
{
}

UTilePlace::UTilePlace(TSubclassOf<class AActor> actor, FTransform transform)
{
    actor_=actor;
    transform_=transform;
}

UTilePlace::~UTilePlace()
{
}

TSubclassOf<class AActor> UTilePlace::getActor()
{
    return actor_;
}

void UTilePlace::setActor(TSubclassOf<class AActor> actor)
{
    actor_ = actor;
}

FTransform UTilePlace::getTransform()
{
    return transform_;
}

void UTilePlace::setTransform(FTransform transform)
{
    transform_ = transform;
}
