#include <iostream>
#include "Actor.h"
#include "World.h"
#include "Player.h"
using namespace std;


int main()
{	
	UWorld* World = new UWorld();

	// �̰� �� ?? ������??
	World->SpawnActor(new APlayer());




	return 0;
}