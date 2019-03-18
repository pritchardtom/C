/*
 *      Exercise 3.5 from Kochan's "Programming in C"
 *
 *      Identify syntatic errors in following program.  Correct and run.
 *
 *      #include <stdio.h>
 *
 *      int main (Void)
 *      {
 *              INT sum;
 *              /* COMPUTE RESULT
 *              sum = 25 + 37 - 19
 *              /* DISPLAY RESULTS //
 *              printf ("The answer is %i\n" sum);
 *              return 0;
 *       }
 *
 */

 #include <stdio.h>

 int main (void)
 {
         int sum;
         /* COMPUTE RESULT */
         sum = 25 + 37 - 19;
         /* DISPLAY RESULTS */
         printf ("The answer is %i\n", sum);
         return 0;
 }
