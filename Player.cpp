#include "Player.h"
#include <iostream>

void APlayer::Move()
{
}

APlayer::APlayer()
{
	std::cout << "플레이어 생성" << std::endl;
}

APlayer::~APlayer()
{
	std::cout << "플레이어 삭제" << std::endl;
}
