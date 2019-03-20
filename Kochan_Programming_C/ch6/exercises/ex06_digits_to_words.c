/*
 *      Exercise 6.6 from Kochan's "Programming in C"
 *
 *      Get an integer, and return the words for each number.
 *              932 should return nine three two
 *
 *      Looked online on different methods to access numbers without array.
 *      Found a few different methods, and decided to go with this version.
 */

#include <stdio.h>

int main (void)
{
	int num, digit, power;
        power = 1;

	printf ("Enter an integer: \n");
	scanf  ("%i", &num);

	while ( num / power > 9 )
		power *= 10;

	do {
		digit = num / power;
		num -= digit * power;
		power /= 10;

		switch ( digit ) {
			case 0:
				printf ("zero ");
				break;
			case 1:
				printf ("one ");
				break;
			case 2:
				printf ("two ");
				break;
			case 3:
				printf ("three ");
				break;
			case 4:
				printf ("four ");
				break;
			case 5:
				printf ("five ");
				break;
			case 6:
				printf ("six ");
				break;
			case 7:
				printf ("seven ");
				break;
			case 8:
				printf ("eight ");
				break;
			case 9:
				printf ("nine ");
				break;
		}
	}
	while ( power != 0 );

	printf ("\n");
	return 0;
}
