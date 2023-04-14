#include <iostream>
#include "MyGameEngine.h"
#include "SDL.h"

#pragma comment(lib, "SDL2.lib")
#pragma comment(lib, "SDL2main.lib")

using namespace std;


int SDL_main(int argc, char* argv[])
{
	GEngine->Init();
	GEngine->Run();

	delete GEngine;

	return 0;
}


