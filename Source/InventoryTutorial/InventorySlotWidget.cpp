// Fill out your copyright notice in the Description page of Project Settings.

#include "InventorySlotWidget.h"
#include "Pickup.h"


void UInventorySlotWidget::SetEquippedItem()
{
	//Left empty for now
}

void UInventorySlotWidget::SetItemTexture(APickup* Item)
{
	//If the item is valid update the widget's texture
	//If not, assign a null ptr to it so the widget won't broadcast wrong information to the player
	(Item) ? ItemTexture = Item->GetPickupTexture() : ItemTexture = nullptr;
}

