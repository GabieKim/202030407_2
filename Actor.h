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

// ���� protected�� �´�..
public:
	// ��ǥ���� �־�� ���Ͱ� ��ġ�ϴϱ�
	int X; 
	int Y;
	char Shape; 

};

