#pragma once
#include <vector>

// 전방선언, 어딘가 쓸 때 가져다 써라, 포인터일 때만!
class AActor;

class UWorld
{
public: 
	UWorld();
	virtual ~UWorld();

	void SpawnActor(AActor* NewActor);
	
public:
	// 포인터는 8바이트로 사이즈 정해져있다
	std::vector <AActor*> Actors;	

	int X;
	int Y;
};

