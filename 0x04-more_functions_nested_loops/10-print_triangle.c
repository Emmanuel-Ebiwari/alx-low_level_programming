#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @n: line count
 *
 */
void print_triangle(int size)
{
	int x = 0;
	int y;

	if (size > 0)
	{
	for (y = 1; y <= size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (x < size - y)
				_putchar(' ');
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		x = 0;
	}
	}
	else
	_putchar('\n');
}
