#include <unistd.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: line count
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
