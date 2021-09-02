#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: line count
 *
 */
void print_diagonal(int n)
{
	int x = 0;
	int y;

	if (n > 0)
	{
	while (x < n)
	{
		for (y = 0; y < x; y++)
		{
			if (x > 0)
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		y = 0;
		x++;
	}
	}
	else
	_putchar('\n');
}
