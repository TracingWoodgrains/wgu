/* Exercise 1-12. Write a program that prints its input one word per line. */
/* to resolve: it reads after every \n, which is fine for these purposes but weird otherwise. also they're still doing the EOF thing, which is whatever */
#include <stdio.h>

#define IN 1
#define OUT 0

int main () {
	int c = 0;	
	int state = 0;
	int i = 0;
	while((c = getchar()) != 'X') {
		if (c == ' ' || c == '\n' || c == '\t') {
			if(state == IN) printf("\n");
			state = OUT;
		}
		else {
			state = IN;
			putchar(c);
		}
	}	
}
