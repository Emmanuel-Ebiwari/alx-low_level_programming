#include "main.h"
#include <stdio.h>
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
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
