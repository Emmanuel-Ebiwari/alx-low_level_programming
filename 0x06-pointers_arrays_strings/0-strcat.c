#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * @dest: string
 * @src: string
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
