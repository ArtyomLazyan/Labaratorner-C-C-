#include <stdio.h>
#include <stdlib.h>

#define EOF (-1)

int main()
{
	// Ctrl + Z veradarcnum e -1 (EOF) ete signed char isk ete unsigned char uremn veradarcnum e
	// 255 tiv@
	//unsigned
	char ch;

	printf("Write text (Ctrl + Z = End programm)\n");
	while ((ch = getchar()) != EOF)
		putchar(ch);


	printf("END PROGRAMM\n");
	return 0;
}