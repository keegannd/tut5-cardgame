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

card deckofcards::draw() {
	if (numcards != 0) {
		card temp = *(deck[numcards - 1]);
		delete deck[numcards - 1];
		numcards -= 1;
		return temp;
	}
	else
		cout << "sorry there's no more cards" << endl;
}
int deckofcards::numberofcards() {
	return numcards;
}

card deckofcards::peek() {
	return *deck[numcards - 1];
}

deckofcards deckofcards::reset(){
	return deckofcards();
}

void deckofcards::shuffle(){
	if (numcards != 0) {
		int i;
		card* temp;
		int random, random2;
		for (i = 0; i < 50; i++) {
			random = rand() % numcards;
			random2 = rand() % numcards;
			temp = deck[random];
			deck[random] = deck[random2];
			deck[random2] = temp;
		}
	}
	else
		cout << "Sorry there are no more cards in the Deck" << endl;
}

void deckofcards::print() {
	int i;
	for (i = 0; i < numcards; i++) {
		cout << (*(deck[i])).number() << (*(deck[i])).colour() << endl;
	}
}

D
deckofcards::~deckofcards()
{
}

int main(){
	deckofcards c;
	c.shuffle();
	card Temp;
	int i;
	for (i = 0; i < 25; i++) {
		Temp = c.draw();
	}
	return 0;
}

