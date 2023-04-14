#include "Actor.h"
#include <iostream>
#include <Windows.h>

// 원래 메인 아니면 안쓴당
using namespace std; 

AActor::AActor()
	: X(1), Y(1), Shape(' ') // 언리얼엔진에선 쓸 일 없음..
{
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
	// 콘솔창의 출력위치 변경할 수 있는 GotoXY함수임
	COORD Pos;
	Pos.X = X;
	Pos.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

	cout << Shape << endl;
}
