#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to character c
 * @c: character
 *
 * Return: character or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
