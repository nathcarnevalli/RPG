#pragma once

//Macros for debugging
#define DRAW_SPHERE(Location, Radius) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, Radius, 24, FColor::Cyan, true);
#define DRAW_LINE(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);
#define DRAW_POINT(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Emerald, true);
#define DRAW_BOX(Location, Extend) if(GetWorld()) DrawDebugBox(GetWorld(), Location, Extend, FColor::Magenta, true);
#define DRAW_VECTOR(StartLocation, EndLocation) if(GetWorld()) \
		{\
			DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f); \
			DrawDebugPoint(GetWorld(), StartLocation, 15.f, FColor::Emerald, true); \
			DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Emerald, true); \
		}