#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: integer
 *
 * Return: ret
 */
int print_last_digit(int n)
{
	int ret = n % 10;

	if (ret < 0)
	{
		ret = ret * -1;
	}
	_putchar(ret + '0');
	return (ret);
}
