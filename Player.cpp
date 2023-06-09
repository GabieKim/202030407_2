#include "Player.h"
#include "MyGameEngine.h"
#include "GameEngine.h"
#include "World.h"

APlayer::APlayer()
{
	Shape = 'P';
	X = 2;
	Y = 2;
	bIsCollision = false;
	R = 0;
	G = 0;
	B = 255;
}

APlayer::APlayer(int NewX, int NewY, char NewShape)
	:AActor(NewX, NewY, NewShape)
{
	SortOrder = 3;
	R = 0;
	G = 0;
	B = 255;
	bIsCollision = false;
}

void APlayer::Tick()
{
	if (GEngine->MyEvent.type != SDL_KEYDOWN)
	{
		return;
	}

	switch (GEngine->MyEvent.key.keysym.sym)
	{
	case SDLK_UP:
	case SDLK_w:
		// �̸� ����
		if (!GEngine->GetWorld()->CheckCollision(X, Y - 1))
		{
			Y--;
		}
		break;

	case SDLK_DOWN:
	case SDLK_s:
		if (!GEngine->GetWorld()->CheckCollision(X, Y + 1))
		{
			Y++;
		}
		break;

	case SDLK_LEFT:
	case SDLK_a:
		if (!GEngine->GetWorld()->CheckCollision(X - 1, Y))
		{
			X--;
		}
		break;

	case SDLK_RIGHT:
	case SDLK_d:
		if (!GEngine->GetWorld()->CheckCollision(X + 1, Y))
		{
			X++;
		}
		break;

	case SDLK_q:
	case SDLK_ESCAPE:
		GEngine->Stop();
		break;
	}
}

APlayer::~APlayer()
{

}
