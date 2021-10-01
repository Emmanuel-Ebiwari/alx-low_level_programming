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
	char c;
	int i;
	float f;
	char *s;
	char *arr = "cifs";

	va_start(ap, format);

	while(format[j] != '\0')
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
			c = va_arg(ap, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(ap, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(ap, char*);
			printf("%s", s);
			break;
		}
		j++;
	}
	printf("\n");

	va_end(ap);
}
