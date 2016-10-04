// DiceProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dice.cpp"
#include <iostream>
using namespace std;


int main()
{
	
	Dice die(6);
	int theroll = die.Roll();
    return 0;
}

