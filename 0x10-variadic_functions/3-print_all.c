#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 *
 * @format: data format
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int j = 0, k = 0;
	char *arr = "cifs";

	va_start(ap, format);
	while (format[j] != '\0')
	{
		if (!format[j])
			printf("(nil)");
		while (k < 4)
		{
			if (j > 0 && format[j] == arr[k])
				printf(", ");
			k++;
		}
		k = 0;
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			printf("%s", va_arg(ap, char*));
			break;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
