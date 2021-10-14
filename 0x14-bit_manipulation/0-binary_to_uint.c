#include "main.h"
/**
 * _strlen - gets the length of a string
 *
 * @s: pointer to the string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}


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
	int len, i;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (i == len - 1)
		{
			if (b[i] == '1')
				sum += 1;
		}
		else if (i < len - 1)
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
