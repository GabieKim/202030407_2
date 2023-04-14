#define _CRT_SECURE_NO_WARNINGS

#include "GameEngine.h"
#include "World.h"
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"
#include "Monster.h"

#include <iostream>
#include <algorithm>
#include <conio.h> // 엔터 안쳐도 키 입력되는 것

GameEngine::GameEngine()
{
	bIsRunning = true;
	World = nullptr;
	KeyCode = 0;
	
}

GameEngine::~GameEngine()
{
	if (World != nullptr)
	{
		delete World;
		World = nullptr;
	}
	
}

void GameEngine::Init()
{
	World = new UWorld();
}

void GameEngine::Load(std::string Filename)
{
	FILE* file;
	char c;

	// 오래된 함수라 함수 자체에 버그가 있다. 그래서 #define해서 그냥 옛날 거 오류있는대로 쓴 거임
	file = fopen(Filename.c_str(), "r");

	int PositionX = 1;
	int PositionY = 1;

	// 엔드 오브 파일, 파일이 끝나지 않으면!
	// 한글자씩 읽는다
	while ((c = fgetc(file)) != EOF)
	{
		if (c == '*')
		{
			GetWorld()->SpawnActor(new AWall(PositionX, PositionY));
			GetWorld()->SpawnActor(new AFloor(PositionX, PositionY));
			//printf("벽");
		}
		else if (c == ' ')
		{
			GetWorld()->SpawnActor(new AFloor(PositionX, PositionY));
			/*printf("바닥");*/
		}
		else if (c == 'P')
		{
			GetWorld()->SpawnActor(new APlayer(PositionX, PositionY));			
			GetWorld()->SpawnActor(new AFloor(PositionX, PositionY));
			//printf("플레이어");
		}
		else if (c == 'G')
		{
			GetWorld()->SpawnActor(new AGoal(PositionX, PositionY));
			GetWorld()->SpawnActor(new AFloor(PositionX, PositionY));
			//printf("목표");
		}
		else if (c == 'M')
		{
			GetWorld()->SpawnActor(new AMonster(PositionX, PositionY));
			GetWorld()->SpawnActor(new AFloor(PositionX, PositionY));
			//printf("몬스터");
		}

		if (c == '\n')
		{
			++PositionY;
			PositionX = 0;
			//printf("줄바꿈");
		}

		//	printf("%d, %d\n", PositionX, PositionY);
		++PositionX;
	}

	fclose(file);

	GetWorld()->Sort();
}

void GameEngine::Run()
{
	while (bIsRunning) // Frame 
	{
		Input();
		Tick();
		Render();		
	}

}

void GameEngine::Stop()
{
	bIsRunning = false;
}

void GameEngine::Input()
{
	KeyCode = _getch();
	
}

void GameEngine::Tick()
{
	World->Tick();
}

void GameEngine::Render()
{
	World->Render();
}
