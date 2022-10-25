// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExplosiveBarrel.generated.h"

class URadialForceComponent;

UCLASS()
class ACTIONROGUELIKE_API AExplosiveBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	AExplosiveBarrel();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComp;
	
	UPROPERTY(VisibleAnywhere)
	URadialForceComponent* ForceComp;

	UFUNCTION()
	void OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
public:	
	virtual void Tick(float DeltaTime) override;

};
