#include "World.h"
#include "Actor.h"
#include <iostream>

UWorld::UWorld()
{
	std::cout << "���� ����" << std::endl;
}


UWorld::~UWorld()
{
	std::cout << "���� ����" << std::endl;
}

void UWorld::SpawnActor(AActor* NewActor)
{
	if (NewActor != nullptr)
	{
		Actors.push_back(NewActor);
	}
}
