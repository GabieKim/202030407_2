#pragma once
#include "World.h"
#include <string>

class GameEngine
{
public:
	GameEngine();
	virtual ~GameEngine();

	virtual void Init();
	virtual void Load(std::string Filename);
	void Run();
	void Stop();	
	
	inline UWorld* GetWorld() const { return World; }

	// ¿ø·¡ protected
	int KeyCode;


protected:
	void Input();
	void Tick();
	void Render();

	bool bIsRunning = true;

	class UWorld* World;
};

