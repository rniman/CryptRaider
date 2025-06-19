// Fill out your copyright notice in the Description page of Project Settings.

#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

    //UE_LOG(LogTemp, Display, TEXT("Trigger Component!"));
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    //UE_LOG(LogTemp, Display, TEXT("Trigger Component Is Ticking"));

	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);

	// int32 index = 0;
	// while(index < Actors.Num())
	// {
	// 	FString ActorName = Actors[index]->GetActorNameOrLabel();
	// 	UE_LOG(LogTemp, Display, TEXT("Overlapping: %s"), *ActorName); 
	// 	++index;
	// }
	// for (int32 i = 0; i < Actors.Num(); ++i)
	// {
	// 	FString ActorName = Actors[i]->GetActorNameOrLabel();
	// 	UE_LOG(LogTemp, Display, TEXT("Overlapping: %s"), *ActorName); 
	// }

	for(AActor* Actor: Actors)
	{
		FString ActorName = Actor->GetActorNameOrLabel();
		UE_LOG(LogTemp, Display, TEXT("Overlapping: %s"), *ActorName); 
	}
}