#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 *
 * @name: string to print
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *s))
{
	if (name && f)
		f(name);
}
