// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	bool repeat = true;
	while (repeat==true){
		int num = -23;
		cout << "Number of bytes: " << sizeof(num) << endl;
		cout << "Adress of num : 0x" << &num << endl;
		cout << "Address of num: " << int(&num) << endl;

		cout << "Press 1 to close" << endl;
		int answer = 0;
		cin >> answer;
		if (answer == 1)
		{
			repeat = false;
		}
		return 0;
	}
}

