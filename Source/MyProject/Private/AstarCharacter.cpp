// Fill out your copyright notice in the Description page of Project Settings.


#include "AstarCharacter.h"

// Sets default values
AAstarCharacter::AAstarCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAstarCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAstarCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAstarCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

