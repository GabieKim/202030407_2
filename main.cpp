#include <iostream>
#include "MyGameEngine.h"
// #include <memory>
using namespace std;

class StaticClass
{
public: 
	StaticClass()
	{
		StaticClass::Count++;
	}
	virtual ~StaticClass()
	{
		StaticClass:Count--;
	}
	// static으로 만들면 얘는 글로벌함수다
	static void A()
	{
		cout << "A" << endl;
	}

	// 변수도 static으로 할 수 있다
	static int Count;

private:
	int Gold;
};
int StaticClass::Count = 0;
//----------------------------------------------
int main()
{	
	//StaticClass::A();
	//StaticClass::Count = 0;	
	
	//bool bIsRunnung = true;
	//// GameEngine
	//UWorld* World = new UWorld();
	//// Load 엔진이 로딩하는 것
	//World->SpawnActor(new APlayer());
	//World->SpawnActor(new AGoal());

	MyGameEngine* Engine =new MyGameEngine();

	Engine->Init();
	Engine->Run();

	delete Engine;

	return 0;
}