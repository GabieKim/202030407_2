#include "World.h"
#include "Actor.h"
#include <algorithm>
#include <iostream>

UWorld::UWorld()
{
	
}


UWorld::~UWorld()
{
	for (auto DeleteActor : Actors)
	{
		delete DeleteActor;
	}
}

void UWorld::SpawnActor(AActor* NewActor)
{
	if (NewActor != nullptr)
	{
		Actors.push_back(NewActor);
	}
}



void UWorld::Tick()
{
	for (auto ProcessActor : Actors)
	{
		ProcessActor->Tick();
	}

}

void UWorld::Render()
{
	for (auto ProcessActor : Actors)
	{
		ProcessActor->Render();
	}

}

void UWorld::Sort()
{
	//Actors[0] > Actors[2];
	//std::sort(Actors.begin(), Actors.end());
	std::sort(Actors.begin(), Actors.end(), AActor::Compare);
}

bool UWorld::CheckCollision(int X, int Y)
{
	for (auto OtherActor : Actors)
	{
		if (OtherActor->X == X &&
			OtherActor->Y == Y &&
			OtherActor->bIsCollision == true)
		{
			return true;
		}
	}	
	// ³»°¡ ÀÌ°É »©¸Ô¾ú¾ú´Ù!!!
	return false;
}
