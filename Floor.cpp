#include "Floor.h"
#include <iostream>

AFloor::AFloor()
{
	std::cout << "�ٴ� ����" << std::endl;
}

AFloor::AFloor(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	SortOrder = 1;
}

AFloor::~AFloor()
{
	std::cout << "�ٴ� ����" << std::endl;

}
