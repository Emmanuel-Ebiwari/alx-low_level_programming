#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n
 * to 98, followed by a new line.
 * @n: integer
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
		printf("%i, ", n);
		n++;
		}
	printf("98\n");
	}
	else if (n == 98)
		printf("98\n");
	else
	{
		while (n > 98)
		{
		printf("%i, ", n);
		n--;
		}
	printf("98\n");
	}
}
