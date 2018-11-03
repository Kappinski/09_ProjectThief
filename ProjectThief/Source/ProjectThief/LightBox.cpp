// Fill out your copyright notice in the Description page of Project Settings.

#include "LightBox.h"


// Sets default values
ALightBox::ALightBox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALightBox::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("LightBox is active"));
	//TArray<AActor*> Lights;
	//GetOverlappingActors(Lights);
	//UE_LOG(LogTemp, Warning, TEXT("Lights: nope :D"));
	
}

// Called every frame
void ALightBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

