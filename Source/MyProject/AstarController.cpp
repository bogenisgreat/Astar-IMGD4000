// Fill out your copyright notice in the Description page of Project Settings.

#include "AstarController.h"
#include  "Engine/StaticMeshActor.h"

AAstarController::AAstarController(){
	AllFloor = &GetComponentsByTag(AStaticMeshActor::StaticClass(), FName("tile"));
	for (int i = 0; i < AllFloor->Num(); i++) {
		AStaticMeshActor* tile = (AStaticMeshActor*)(&AllFloor)[i];
		int x = tile->Tags[1].GetNumber(), y = tile->Tags[2].GetNumber();
		FloorMap[x][y] = tile;
		FString s = tile->GetStaticMeshComponent()->GetMaterial(0)->GetFNameForStatID().ToString();
		s.Append(" Coords: ");
		s.AppendInt(x);
		s.Append(", ");
		s.AppendInt(y);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *s);
		//if (tile->GetStaticMeshComponent()->GetMaterial(0)->GetFNameForStatID().IsEqual("")) {
		//	Target = tile;
		//}
	}
}