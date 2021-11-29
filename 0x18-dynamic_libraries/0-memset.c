#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to constant
 * @b: constant
 * @n: amount of bytes
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
