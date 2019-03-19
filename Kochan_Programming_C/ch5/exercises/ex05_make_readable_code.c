/*
 *      Exercise 5.5 from Kochan's "Programming in C"
 *
 *      Take the code below, and improve readability:
 *              #include <stdio.h>
 *              int main(void){
 *              int n,two_to_the_n;
 *              printf("TABLE OF POWERS OF TWO\n\n");
 *              printf(" n 2 to the n\n");
 *              printf("--- ---------------\n");
 *              two_to_the_n=1;
 *              for(n=0;n<=10;++n){
 *              printf("%2i %i\n",n,two_to_the_n); two_to_the_n*=2;} return 0;}
 */

#include <stdio.h>

int main(void)
{
        int n, two_to_the_n;
        printf("TABLE OF POWERS OF TWO\n\n");
        printf(" n     2 to the n\n");
        printf("--- ---------------\n");

        two_to_the_n = 1;
        for( n=0; n <= 10; ++n ) {
                printf("%2i\t %i\n", n, two_to_the_n);
                two_to_the_n *= 2;
        }
        return 0;
}
