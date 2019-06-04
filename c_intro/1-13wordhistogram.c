/* 1-13 Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 *
 * Pseudopseudocode:
 * this is in the arrays section, so apparently I want some arrays. I think it's reasonable to restrict lengths to some fixed amount, so let's arbitrarily provide an array with size 10 and look for words from 1-10+ letters. Call it wordlength[]. Okay, now, what you'll want is an incrementing counter between every whitespace, and when it reaches the whitespace, you should increment the relevant wordlength[i], then reset the counter and move on. this should probably just take an if/else if, maybe include an else.
 *
 * ok let's start coding with that in mind and come back if it starts looking like nonsense */

/* VERDICT: overall quite pleased; obviously would break in pieces formatting-wise with larger files but otherwise quite pretty if I do say so myself.
 *
 * Please note that this comes before functions in the book, so I've repeated some code that I likely could/should have placed in a function. */

#include <stdio.h>

#define ISTHISMAGIC 11
#define NOT 0
#define WHATABOUTTHIS 10
#define ONE 1
int main(){
	int histogram[ISTHISMAGIC];
	int increment = NOT;
	int reader = NOT;
	int temp = NOT;

	printf("HORIZONTAL HISTOGRAM:\n");
	for (int i = NOT; i < ISTHISMAGIC; i++) histogram[i] = 0; /* initialize histogram[] */
	while((reader = getchar()) != EOF) {
		if (reader != ' ' && reader != '\n' && reader != '\t'){
			increment++;
		}
		else {
			if(increment > WHATABOUTTHIS) increment = WHATABOUTTHIS;
			if(increment != NOT) histogram[increment]++;
			increment = NOT;
		}
	}

	for(int i = ONE; i <= WHATABOUTTHIS; i++) {
		if(i == WHATABOUTTHIS) printf("%d+:\t", i); 
		else printf("%d:\t", i);
		for(int j = ONE; j <= histogram[i]; j++) printf("#");
		printf(" %d\n", histogram[i]);
	}	
	/* VERTICAL HISTOGRAM (more complicated, as they say):
	 * Okay, I don't want to have it reaching downward. So the simplest thing to do is something like
	 * 1. check which bar is tallest
	 * 2. start printing at that bar, leaving histogram[i-1] tabs beforehand. decrement each time
	 * 3. as each line enters, start printing, leaving needed amount of tabs between each bar 
	 * 4. At base, print ---------- and the numbers beneath */
	printf("\nVERTICAL HISTOGRAM:\n");
	for(int k = ONE; k <= WHATABOUTTHIS; k++) {
		if (histogram[k] > temp) temp = histogram[k];
	}
	
	for(int l = temp; l >= ONE; l--) {
		for(int m = ONE; m <= WHATABOUTTHIS; m++) {
			if (histogram[m] >= l) {
				printf("###\t");
			}
			else printf("\t");
		}
		printf("\n");
	}

	for(int n = ONE; n <= WHATABOUTTHIS; n++) {
		printf(" %d \t", n);
	}
	printf("\n");
	for(int o = ONE; o <= WHATABOUTTHIS; o++) {
		printf(" %d \t", histogram[o]);
	}
	printf("\n");
}


