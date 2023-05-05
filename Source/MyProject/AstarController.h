// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AstarController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AAstarController : public AAIController
{
	GENERATED_BODY()

public:
	AAstarController();
	UObject* FloorMap[12][12];
	UActorComponent* Target;
	TArray<UActorComponent*>* AllFloor;
};
