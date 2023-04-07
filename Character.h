#pragma once
#include "Actor.h"

class ACharacter
{
public:
	ACharacter();
	virtual ~ACharacter();

public:
	virtual void Move();
	virtual void Enter();

protected:
	int PosX;
	int PosY;
};

