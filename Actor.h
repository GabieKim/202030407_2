#pragma once

class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY, char NewShape);
	virtual ~AActor();

	// 입력은 하드웨어서 받는거니까 없음
	virtual void Tick();
	virtual void Render();

	bool operator<(const AActor* RHS)
	{
		return (this->SortOrder) < (RHS->SortOrder);
	}

	// 스태틱은 생성을 하든 말든 메모리에 올라간다
	static inline bool Compare (const AActor* LHS, const AActor* RHS)
	{
		return (LHS->SortOrder) < (RHS->SortOrder);
	}

	// 원래 protected가 맞당..
public:
	// 좌표값이 있어야 액터가 위치하니까
	int X;
	int Y;
	char Shape;

	// 그리는 순서
	int SortOrder = 1;

};

