#include <stdio.h>
/**
 * main - Prints all possible combinations
 * of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <=  9; i++)
	{
	if (i > 9)
	break;
	else
	{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
