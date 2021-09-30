#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_number - prints numbers followed by a new line
 *
 * @separator: seperators
 * @n: number of argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, value;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(ap, int);

		if(separator)
		{
			if (i > 0)
				printf("%s ", separator);
		}
		printf("%d", value);
	}
	putchar('\n');

	va_end(ap);
}
