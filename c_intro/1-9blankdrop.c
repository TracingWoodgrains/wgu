#include <stdio.h>

/* This completes exercise 1-9 of K&H: "Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank." Note that I use 'X' as a blunt instrument in place of EOF since I'm just reading from inputs typed into the console and...
 *
 * look, it's just a quick hack, ok */
int main() {
	int i = 0, lag = 0, output = 0;
	while ((i = getchar()) != 'X') {
		if (lag == ' ' && i == ' ') ;
		else putchar(i);
		lag = i;
	}
}
