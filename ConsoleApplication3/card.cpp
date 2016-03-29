#include "card.h"
#include <iostream>

card::card(int num, string col)
{
	number = num;
	colour = col;
}

string card::colour()
{
	return colour;
}

int card::number()
{
	return number;
}

void card::print()
{
	cout << colour << " " << number << endl;
}

