#pragma once
#include "Character.h"
#include "Actor.h"

class AMonster : public ACharacter
{
public:
	AMonster();
	virtual ~AMonster();

public:
	virtual void Move() override;

protected:

};

