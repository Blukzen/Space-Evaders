// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpaceshipAccelerateBPLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ASS1_COMP313_API USpaceshipAccelerateBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		static FTransform SpawnObstacle(const FTransform center, const int width, const int depth, const int minScale, const int maxScale);
};
