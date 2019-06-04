#include <stdio.h>

/* K&R (previously written as K&H) Exercise 1-10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way. Not sure whether it was actually looking for a solution involving printf, but my mind was tired and fiddling with multiple-character outputs in putchar sounded weird, plus it's all still in command line, so idk */
int main() {
	int i = 0;
	while ((i = getchar()) != 'X') {
		if (i == '\t') printf("\\t"); 
		else if (i == '\b') printf("\\b"); /* I'm honestly not sure what it means by detect backspaces, but there you go */
		else if (i == '\\') printf("\\\\");
		else putchar(i);
	}
}
