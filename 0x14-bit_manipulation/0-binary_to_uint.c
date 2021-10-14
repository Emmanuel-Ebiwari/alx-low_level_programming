#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, x = 2;
	int len = strlen(b), i;

	if (!b)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (i == len - 1)
		{
			if (b[i] == '1')
				sum += 1;
		}
		if (i < len - 1)
		{
			if (b[i] == '1')
			{
				sum += x;
			}
			x *= 2;
		}
	}
	return (sum);
}
