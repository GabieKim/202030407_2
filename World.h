#pragma once
#include <vector>

// ���漱��, ��� �� �� ������ ���, �������� ����!
class AActor;

class UWorld
{
public: 
	UWorld();
	virtual ~UWorld();

	void SpawnActor(AActor* NewActor);
	
public:
	// �����ʹ� 8����Ʈ�� ������ �������ִ�
	std::vector <AActor*> Actors;	

	int X;
	int Y;
};

