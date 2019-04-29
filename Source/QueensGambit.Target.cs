// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class QueensGambitTarget : TargetRules
{
	public QueensGambitTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "QueensGambit" } );
        
        // Folowing: https://wiki.unrealengine.com/Steam,_Using_the_Steam_SDK_During_Development
        bUsesSteam = true;
	}
}
