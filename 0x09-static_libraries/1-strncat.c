#include "main.h"
/**
 * _strncat - concatenates two strings.
 *
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
