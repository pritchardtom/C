/*
 *      Exercise 2.10 from King's C Programming: A Modern Approach
 *
 *      In the original dimensional weight example (../examples/02...)
 *      which spaces are essential?
 *
 *      To answer this, I've reduced all whitespaces possible (minus)
 *      indentation, from the original code, and checked it compiles.
 *
 */

#include <stdio.h>

int main(void)
{
        int height,length,width,volume,weight;
        height=8;
        length=12;
        width=10;
        volume=height*length*width;
        weight=(volume+165)/166;
        printf("Dimensions: %dx%dx%d\n",length,width,height);
        printf("Volume (cubic inches): %d\n",volume);
        printf("Dimensional weight (pounds): %d\n",weight);
        return 0;
}
