/* Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
 * Well, this sounds not terribly complicated, probably? will need to use gettline again, and then probably putchar?? something like that. so--divide into two functions: gettline and print line. call both from main. righto, let's get to it and see which mistakes pop out. */

#include <stdio.h>
#define LINEMAX 1000
int gettline(char passline[], int maxline);
void printline(char giveline[]);

int main() {
	int len = 0;
	int max = 0;
	char line[LINEMAX] = { };

		
}

int gettline(char passline[], int maxline) {
	int i = 0;
	int c = 0;
	for(i = 0; i < maxline && (c = getchar()) != EOF && c 

}
