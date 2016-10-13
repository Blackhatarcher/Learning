// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:​
	Person(){ name = "George Whitworth"; age = 198; }​
	Person(string n, int a){ name = n; age = a; }​
	​
	string getName(){ return name;}​
	int getAge(){ return age;}​
	void birthday(){ age++;}​
};

int main()
{
	bool repeat = true;
	while (repeat){
		int num = -23;
		cout << "Number of bytes: " << sizeof(num) << endl;
		cout << "Adress of num : 0x" << &num << endl;
		cout << "Address of num: " << int(&num) << endl;

		int a = 10;
		int b = 20;
		int c = 30;

		int*ptrA = &a;
		int*ptrB = &b;
		int*ptrC = &c;

		int *x = new int;
		
		cout << *x << " Is at address " << x << endl;
		delete x;

		const int SIZE = 4;
		int vals[SIZE] = { 4,7,11,25 };
		int *ptr = vals;
		for (ptr = vals; ptr < vals + SIZE; ptr++) {
			cout << *ptr << " is stored at";
			cout << "address " << ptr << "(" << long(ptr) << ")";
			cout << "in memory" << endl;
		}
		
		Person p;
		cout <<"Name: " << p.getName() << ", age: " << p.getAge() << endl;
		cout <<"Happy Birthday " << p.getName() << "!";
		p.birthday();
		cout << " You're now " << p.getAge() << " years old!\n\n";
	


		cout << " " << endl;
		cout << "Press 1 to close" << endl;
		int answer = 0;
		cin >> answer;
		if (answer == 1)
		{
			repeat = false;
		}
	}
	return 0;
}

