#include <iostream>
#include "Actor.h"
#include "World.h"
#include "Player.h"
using namespace std;


int main()
{	
	UWorld* World = new UWorld();

	// 이게 왜 ?? 빨간줄??
	World->SpawnActor(new APlayer());




	return 0;
}