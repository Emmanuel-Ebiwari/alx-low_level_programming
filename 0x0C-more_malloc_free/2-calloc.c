#include "main.h"
#include <stdlib.h>
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

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: integer
 * @size: integer
 *
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int bytes = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(bytes);

	if (!ptr)
		return (NULL);

	_memset(ptr, 0, bytes);

	return (ptr);
}
