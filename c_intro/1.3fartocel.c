#include <stdio.h>

int main()
{
/* Generate an integer table:
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20; */
/*
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
 * }
		*/

	/* respond to integer prompt
	printf("Gimme a fahrenheit number: ");
	scanf("%i", &fahr);
	celsius = 5 * (fahr-32) / 9;
	printf("\n%d degrees fahrenheit is %d degrees celsius.",fahr, celsius);
	*/
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Your Faro to Celiac conversion table is as follows:\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	lower = -40; upper = 150; step = 10;
	celsius = lower;
	printf("Your Ceiling to Faraoh conversion table is as follows:\n");

	while (celsius <= upper) {
		fahr = (celsius * (9.0/5.0)) + 32;
	       printf("%3.0f %5.1f \n", celsius, fahr);
       		celsius = celsius + step;	       
	}

	/* if I wanted a for loop */
	printf("f is for little kids who don't go to bed"\n);

	for (float i = 300; i >= 0; i = i-20) {
		printf("%3.0f %5.1f \n", i, ((i-32) * (5.0/9.0)));
	}
	/*SORRY ABOUT THE MAGIC NUMBERS; THE TEXTBOOK JUST NOW REMINDED ME*/
}
