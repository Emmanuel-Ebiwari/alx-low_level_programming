#include "main.h"
/**
 * times_table - Write a function that prints the
 * 9 times table, starting with 0.
 */
void times_table(void)
{
	int i,j,output;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			output = i * j;
			if (output <= 9)
			{
				if (i == 0)
				_putchar(output + '0');
				else
				{
				_putchar(' ');
				_putchar(output + '0');
				}
			}
			else if (output > 9)
			{
			_putchar((output / 10) + '0');
			_putchar((output % 10) + '0');
			}
			if (i < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
		i = 0;
	}
}
