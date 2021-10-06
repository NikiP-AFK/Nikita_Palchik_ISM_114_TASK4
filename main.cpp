#include "t4.h"
#include <iostream>
using namespace std;

int main()
{
	
	auto test = trig();
	cout << "Testing first funtion: " << endl;
	cin >> test;
	cout << test;

	cout << "Testing trigonometric functions: " << endl;
	auto trg = trigonometry();
	cin >> trg;
	cout << trg;

	return 0;
}