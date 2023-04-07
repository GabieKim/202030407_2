#pragma once
#include "Character.h"
#include "Actor.h"
class APlayer : public ACharacter
{
public:
	APlayer();
	virtual~APlayer();

public:
	virtual void Move() override;
	
protected:
	int PosX;
	int PosY;
};

