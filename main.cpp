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
	// static���� ����� ��� �۷ι��Լ���
	static void A()
	{
		cout << "A" << endl;
	}

	// ������ static���� �� �� �ִ�
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
	//// Load ������ �ε��ϴ� ��
	//World->SpawnActor(new APlayer());
	//World->SpawnActor(new AGoal());

	MyGameEngine* Engine =new MyGameEngine();

	Engine->Init();
	Engine->Run();

	delete Engine;

	return 0;
}