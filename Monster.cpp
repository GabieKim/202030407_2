#include "Monster.h"
#include <iostream>

AMonster::AMonster()
{
	std::cout << "몬스터 생성" << std::endl;
}

AMonster::~AMonster()
{
	std::cout << "몬스터 삭제" << std::endl;
}
