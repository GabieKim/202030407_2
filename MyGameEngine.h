#pragma once
#include "GameEngine.h"
class MyGameEngine :   public GameEngine
{
	
private:
	// 마음대로 생성 못하게 프라이빗
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

// GEngine으로 쓰면 GetEngine::GetEngine으로 들어가게 하는 매크로
#define GEngine MyGameEngine::GetEngine()