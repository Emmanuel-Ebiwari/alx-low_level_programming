#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: line count
 */
void print_square(int size)
{
	int l;
	int b;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
			b = 0;
		}
	}
	else
	_putchar('\n');
}
