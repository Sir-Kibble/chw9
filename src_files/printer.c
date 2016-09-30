#include <stdio.h>
#include <stdlib.h>
#include "cards.h"
#include "printer.h"


void printer(int numofcards, struct Hand *H){
	int x;
	printf("Unsorted hand: \n");
	for(x = 0; x < numofcards; x++){
		printf("\tCard %d: %s\n",x,H->cards[x].name);
	}
	
	printf("\n\nSorted hand: \n");
	sortHand(numofcards, H);
	
	for(x = 0; x < numofcards; x++){
		printf("\tCard %d: %s\n",x,H->cards[x].name);
	}
}//end printer

