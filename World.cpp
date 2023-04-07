#include "World.h"
#include "Actor.h"
#include <iostream>

UWorld::UWorld()
{
	std::cout << "技惑 积己" << std::endl;
}


UWorld::~UWorld()
{
	std::cout << "技惑 昏力" << std::endl;
}

void UWorld::SpawnActor(AActor* NewActor)
{
	if (NewActor != nullptr)
	{
		Actors.push_back(NewActor);
	}
}
