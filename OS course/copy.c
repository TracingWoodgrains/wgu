/*
 *Pseudopseudocode:
 *print "hi, what file you want to read?"
  read what nonsense they have to say, store it in variable
  check if their nonsense exists or if they're being dumb again
 *print "aight bet. where you writing it to?"
 *read again, store in variable again 
 who cares if their nonsense exists this time; let's be honest 
 ugh fine: if it exists, say "continue and overwrite? y/n" and proceed
 open nonsense pile 1, read through it
 open nonsense pile 2, write to it
 print some words to tell user 'your nonsense is done'
 congrats, your nonsense is done
 * */
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>

int main(void) {
	int readFile;
	char misc;
	char toRead[40];
	char toWrite[40];
	FILE *readFrom, *writeTo;
	printf("You want copy file, yes? Present your file: ");
	fgets( toRead, 40, stdin );
	strtok(toRead, "\n");
	readFrom = fopen(toRead, "r");
	if (readFrom == NULL) {
		printf("wow, bro, screw off with that nonsense"); exit(EXIT_FAILURE);
	}

	printf("\nright, right, now where should I put this nonsense? ");
	fgets( toWrite, 40, stdin );
	strtok(toWrite, "\n");
	writeTo = fopen(toWrite, "w");
	if (writeTo == NULL) {
		printf("hi loser");
		readFile = creat(toWrite, S_IRUSR|S_IWUSR);		
	}
	
	while( (misc = fgetc(readFrom) ) != EOF) {
		fputc(misc, writeTo);
	}
	
/*	printf("\nso, you're copying %s to %s, you say? sure sure, whatever",toRead,toWrite);
*/
	printf("\nYou're copying"); puts (toRead); printf(" to "); puts (toWrite); printf(", you say? yeah, whatever");
	printf("\n\n...\n\nNonsense navigated.");
	fclose(readFrom);
	fclose(writeTo);
}
