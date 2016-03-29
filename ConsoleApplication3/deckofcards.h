#pragma once
#include "card.h"

class deckofcards
{
private:
	int numcards = 20;
	card** deck;

public:
	deckofcards();
	deckofcards reset();
	void shuffle();
	card draw();
	card peek();
	int numberofcards();
	void print();
	~deckofcards();
};

