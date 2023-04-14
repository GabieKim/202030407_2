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

	
	virtual void Tick();
	virtual void Render();
	
	void Sort();

public:
	// �����ʹ� 8����Ʈ�� ������ �������ִ�
	std::vector <AActor*> Actors;	

};

