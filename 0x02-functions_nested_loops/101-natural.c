#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3
 * or 5 below 1024 (excluded), followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int no = 1024;
	int i, j;
	int output = 0;

	for (i = 0; i < no; i++)
	{ 
		if ((i % 3 != 0) || (i % 5 != 0))
			continue;
		else
			output += i;
	}
	printf("%i ", output);
	putchar('\n');
	return (0);
}
