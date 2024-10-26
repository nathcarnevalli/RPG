#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "DebugMacros.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	const FRotator Rotation = GetActorRotation();
	const FVector Location = GetActorLocation();
	DRAW_SPHERE(Location, 25.f);
	DRAW_VECTOR(Location, Location + GetActorForwardVector() * 100.f);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

