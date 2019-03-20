/*
 *      Exercise 6.4 from Kochan's "Programming in C"
 *
 *      Write program that acts as a simple printing calc.
 *      Should allow user to type exp in form: num operator.
 *      The following operators should be recognised:
 *              + - * / S E
 *
 *      The S operator tells program to set accumulator.
 *      The E operator tells program that execution has ended.
 *
 *      Sample run:
 *
 *              10 S          -> Sets accumulator to 10
 *                            -> print accumulator: = 10.000000
 *              2 /           -> Divide accumulator by 2
 *                            -> print accumulator: = 5.000000
 *              55 -          -> Subtract accumulator by 55
 *                            -> print accumulator: = -55.000000
 *              100.25 S      -> Sets accumulator to 100.250000
 *                            -> print accumulator: = 100.250000
 *              4 *           -> multiply accumulator by 4
 *                            -> print accumulator: = 401.000000
 *              0 E           -> end of program
 *                            -> print accumulator: = 401.000000
 *
 *      Used above as test case - passed.
 */

#include <stdio.h>

int main (void)
{
        float num, accumulator;
        char  operator;

        while ( operator != 'E' ) {
                printf ("Enter: <num> <operator>: \n");
                scanf ("%f %c", &num, &operator);

                switch (operator)
                {
                        case 'S':
                                 accumulator = num;
                                 printf ("= %f\n", accumulator);
                                 break;
                        case 'E':
                                 printf ("= %f\n", accumulator);
                                 printf ("End of calculation\n");
                                 break;
                        case '+':
                                 accumulator += num;
                                 printf ("= %f\n", accumulator);
                                 break;
                        case '-':
                                 accumulator -= num;
                                 printf ("= %f\n", accumulator);
                                 break;
                        case '*':
                                 accumulator *= num;
                                 printf ("= %f\n", accumulator);
                                 break;
                        case '/':
                                if ( accumulator == 0 || num == 0 )
                                        printf ("Division by zero!\n");
                                else
                                        accumulator /= num;
                                printf ("= %f\n", accumulator);
                                break;
                        default:
                                printf ("Unknown operator\n");
                                break;
                }
        }
        return 0;
}
