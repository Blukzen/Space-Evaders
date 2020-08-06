// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceshipAccelerateBPLibrary.h"

FTransform USpaceshipAccelerateBPLibrary::SpawnObstacle(const FTransform center, const int width, const int depth, const int minScale, const int maxScale) {
	FTransform transform;
	FVector offset;
	offset.X = (rand() % depth) - (depth / 2);
	offset.Y = (rand() % width) - (width / 2);

	transform.SetLocation(center.GetLocation() + offset);

	FVector scale((rand() % maxScale) + minScale);
	transform.SetScale3D(scale);

	return transform;
}