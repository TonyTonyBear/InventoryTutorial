// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"


// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Initialize Pickup Properties
	PickupSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupSM"));
	PickupTexture = CreateDefaultSubobject<UTexture2D>(TEXT("ItemTexture"));

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickup::SetGlowEffect(bool Status)
{
	PickupSM->SetRenderCustomDepth(Status);
}

