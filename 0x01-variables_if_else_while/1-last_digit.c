#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of variable's value
 *
 * Return: 0
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 5)
        printf("Last digit of %i is and is greater than 5\n",n);
        else if (n == 0)
        printf("Last digit of %i is and is 0\n",n);
        else if(n < 6 && n != 0)
        printf("Last digit of %i is and is less than 6 and not o\n",n);
        return (0);
}

