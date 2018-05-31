
#include<iostream>
using namespace std;

class Singleton{
private:
	Singleton(){}
	static Singleton * _instance;
public:	
	static Singleton* GetInstance(){
		if (_instance == nullptr)
		{
			_instance = new Singleton;
		}
		return _instance;
	}
};
Singleton * Singleton::_instance = nullptr;

int main()
{
	Singleton *p = Singleton::GetInstance();
	return 0;
}