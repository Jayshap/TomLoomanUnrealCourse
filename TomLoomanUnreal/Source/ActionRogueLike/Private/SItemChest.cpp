// Fill out your copyright notice in the Description page of Project Settings.


#include "SItemChest.h"

ASItemChest::ASItemChest()
{
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;

	LidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidMesh"));
	LidMesh->SetupAttachment(BaseMesh);

}

void ASItemChest::Interact_Implementation(APawn* InstigatorPawn)
{
	LidMesh->SetRelativeRotation(FRotator(TargetPitch,0,0));
}

void ASItemChest::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASItemChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

