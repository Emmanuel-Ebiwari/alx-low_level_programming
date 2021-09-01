#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3
 * or 5 below 1024 (excluded), followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int output = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			output += i;
		}
		i++;
	}
	printf("%i\n", output);
	return (0);
}
