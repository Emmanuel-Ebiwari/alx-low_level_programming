#include "main.h"
/**
 * more_numbers - checks for lowercase character.
 */
void more_numbers(void)
{
	int j, i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
				_putchar(j + '0');
		}
		j = 0;
		i++;
	_putchar('\n');
	}
}
