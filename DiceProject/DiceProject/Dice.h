#pragma once
class Dice
{
private:
	int sides;
public:
	int Roll();
	int GetRolls();
	int GetSides();
	Dice(int x);
};

