#include <iostream>
#include "MyGameEngine.h"

using namespace std;

int main()
{ 
	GEngine->Init();
	GEngine->Run();

	delete GEngine;

	return 0;
}