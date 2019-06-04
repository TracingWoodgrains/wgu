/*  This line stretched for testing purposes. 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays 1.9: print longest input line, demonstrating char arrays1.9: print longest input line, demonstrating char arrays */

#include <stdio.h>
#define MAXLINE 1000

int gettline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	len = 0;
	while ((len = gettline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) {
		printf("The longest line, at %d characters, is:\n%s", max, longest);
	}
	return 0;
}
/* How to print arbitrarily long lines? Well, look at what we have now: get an array of max size 1000, getchar into that array until you reach a newline. what if I made a new variable after the if c = \n nonsense where I asked it to keep reading getchars and adding them to i? Let's try it */
int gettline(char gotline[], int lim) {
	int c, i;
	int test;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		gotline[i] = c;
	}
	while((c = getchar()) != EOF && c != '\n') {
		++i;	
	}
	if (c == '\n') {
		gotline[i] = c;
		++i;
	}
	gotline[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0' ) {
			++i;
	}
}
