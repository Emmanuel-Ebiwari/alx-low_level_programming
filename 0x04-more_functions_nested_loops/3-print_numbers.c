#include "main.h"
/**
 * print_numbers - checks for lowercase character.
 *
 * Return: ret
 */
void print_numbers(void)
{
	int i = 0; 

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
