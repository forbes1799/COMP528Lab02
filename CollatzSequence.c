/*
 * Written by Dr Maryam Abo-Tabik
*/ 

#include <stdio.h>


/* the function return number based on even/odd test*/
int test(unsigned int x)
{
    //Should only perform the collatz functionality.
}

/* the function return the length of the sequnce*/
int count_length(unsigned int x)
{
    //Should call test with x: x = test(x). While x != 1, call test.
}

int main(int argc, char* argv[])
{
    unsigned int i, init = 0, count = 0;

    for (i = 1; i < 1000000; i++)
    {
        unsigned int k = count_length(i);
        
        if (k > count)
        {
            count = k;
            init = i;
            printf("The sequence length for the number %u equals %u \n", init, count);
        }
    }

    return 0;
}

//
