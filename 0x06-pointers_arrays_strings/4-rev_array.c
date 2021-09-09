#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: integer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i, len, output;

	i = 0;
	len = n - 1;
	while (i < len)
	{
		output = a[i];
		a[i] = a[len];
		a[len] = output;
		i++;
		len--;
	}

}
