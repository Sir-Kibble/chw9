#include <stdlib.h>
typedef Card;

//typedef struct Deck
struct Card{
    int member;
	char *name;
};

typedef Hand;

struct Hand {
    int count;
	struct Card cards[];
};
 
 typedef Deck;
 
struct Deck {
    int count;
	struct Card cards[];
};
 


void drawHand(int numofcards, struct Hand *H);
void sortHand(int numofcards, struct Hand *H);
int compar(const void * elem1, const void * elem2);
