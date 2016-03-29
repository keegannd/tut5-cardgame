#include "deckofcards.h"
#include <iostream>

deckofcards::deckofcards()
{
	int i;
	int j;
	int k = 0;
	deck = new card*[20];
	for (j = 1; j < 3; j++){
		for (i = 1; i < 3; i++){
			if (j == 1)
				deck[k] = new card(i, "red");
			else
				deck[k] = new card(i, "black");
			k++;
		}
	}
}

deckofcards::deckofcards()
{
}


deckofcards::~deckofcards()
{
}
