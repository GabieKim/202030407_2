#include "Floor.h"
#include <iostream>

AFloor::AFloor()
{
	
}

AFloor::AFloor(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	SortOrder = 1;
}

AFloor::~AFloor()
{


}
