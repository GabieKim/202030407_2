#include "Floor.h"
#include <iostream>

AFloor::AFloor()
{
	std::cout << "¹Ù´Ú »ý¼º" << std::endl;
}

AFloor::AFloor(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	SortOrder = 1;
}

AFloor::~AFloor()
{
	std::cout << "¹Ù´Ú »èÁ¦" << std::endl;

}
