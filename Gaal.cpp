#include "Goal.h"
#include <iostream>

AGoal::AGoal()
{
	Shape = 'G';
	X = 9;
	Y = 9;

	R = 0;
	G = 255;
	B = 0;
}

AGoal::AGoal(int NewX, int NewY, char NewShape)
	:AActor(NewX, NewY, NewShape)
{
	SortOrder = 2;

	R = 0;
	G = 255;
	B = 0;
}

AGoal::~AGoal()
{
	
}
