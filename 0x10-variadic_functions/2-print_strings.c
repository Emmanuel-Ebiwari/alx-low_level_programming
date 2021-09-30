#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints numbers followed by a new line
 *
 * @separator: seperators
 * @n: number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *value;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(ap, char*);

		if (separator)
		{
			if (i > 0)
				printf("%s", separator);
		}
		!value ? printf("nil") : printf("%s", value);
	}
	printf("\n");

	va_end(ap);
}
