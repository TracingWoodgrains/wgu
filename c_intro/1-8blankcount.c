#include <stdio.h>

/* This program fulfills exercise 1-8 from K&H */
int main() {
	int i=0, blank=0, tab=0, enter=0;
	while ((i = getchar()) != 'X'){
		if (i == ' ')
			blank++;
		if (i == '\t')
			tab++;
		if (i == '\n')
			enter++;
	}
		printf("Total blanks: %d\nTotal tabs: %d\nTotal \\n: %d\n",blank,tab,enter);
}
