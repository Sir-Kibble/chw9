#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include "cards.h"
#include "printer.h"
# define MAX_ITEM 8

int main(int argc, char** argv){
	struct Hand hand;
	drawHand(10, &hand);
	printer(10, &hand);
	return 0;
}

