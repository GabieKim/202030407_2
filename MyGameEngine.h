#pragma once
#include "GameEngine.h"
class MyGameEngine :   public GameEngine
{
	
private:
	// ������� ���� ���ϰ� �����̺�
	MyGameEngine();

public:
	virtual ~MyGameEngine();

	static inline MyGameEngine* GetEngine() 
	{
		if (Instance == nullptr)
		{
			Instance = new MyGameEngine();
		}		

		return Instance;
	}

	virtual void Init() override;

private:
	static MyGameEngine* Instance;

};

// GEngine���� ���� GetEngine::GetEngine���� ���� �ϴ� ��ũ��
#define GEngine MyGameEngine::GetEngine()