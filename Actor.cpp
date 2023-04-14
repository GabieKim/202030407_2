#include "Actor.h"
#include <iostream>
#include <Windows.h>
#include "MyGameEngine.h"

// ���� ���� �ƴϸ� �Ⱦ���
using namespace std; 

AActor::AActor()
	: X(1), Y(1), Shape(' ') // �𸮾������� �� �� ����..
{
	R = 255;
	G = 255;
	B = 255;
}

AActor::AActor(int NewX, int NewY, char NewShape)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
}

AActor::~AActor()
{
}

void AActor::Tick()
{
}


void AActor::Render()
{
	// �ܼ�â�� �����ġ ������ �� �ִ� GotoXY�Լ���
	/*COORD Pos;
	Pos.X = X;
	Pos.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

	cout << Shape << endl;*/

	SDL_SetRenderDrawColor(GEngine->MyRenderer, R, G, B, 0);
	SDL_Rect MyRect = SDL_Rect{ (X-1) * 30, (Y-1) * 30, 30, 30};
	SDL_RenderFillRect(GEngine->MyRenderer, &MyRect);

}
