#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: line count
 *
 */
void print_diagonal(int n)
{
	int i = 0;
	int y;

	if (n > 0)
	{
	while (i < n)
	{
		for (y = 0; y < i; y++)
		{
			if (i > 0)
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		y = 0;
		i++;
	}
	}
	else
	_putchar('\n');
}
