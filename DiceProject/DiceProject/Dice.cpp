#include "Dice.h"

int Dice::Roll() {
	return sides;
}
int Dice::GetRolls() {
	return 0;
}
int Dice::GetSides() {
	return 0;
}
Dice::Dice(int x)
{
	sides = x;
}


