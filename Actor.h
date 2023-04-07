#pragma once

class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY, char NewShape);
	virtual ~AActor();

	virtual void Input();
	virtual void Tick();
	virtual void Render();

// 원래 protected가 맞당..
public:
	// 좌표값이 있어야 액터가 위치하니까
	int X; 
	int Y;
	char Shape; 

};

