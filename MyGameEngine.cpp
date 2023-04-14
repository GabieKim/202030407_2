#include "MyGameEngine.h"
#include "Player.h"
#include "Floor.h"
#include "Wall.h"
#include "Monster.h"
#include "Goal.h"
#include "World.h"


MyGameEngine* MyGameEngine::Instance = nullptr;

MyGameEngine::MyGameEngine()
{


}

MyGameEngine::~MyGameEngine()
{


}

void MyGameEngine::Init()
{
	//GameEngine::Init();
	// 슈퍼 = 비주얼스튜디오에서만 쓰는 키워드
	__super::Init(); 


	// Map Load
	/*World->SpawnActor(new APlayer());
	World->SpawnActor(new AGoal());
	World->SpawnActor(new AFloor());
	World->SpawnActor(new AMonster());
	World->SpawnActor(new AWall());*/
	Load("level1.dat");


}
