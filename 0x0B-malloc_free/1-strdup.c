#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;
	int i;


	for (i = 0; s[i] != '\0'; i++)
		length = i + 1;
	return (length);
}

/**
 * _strdup -  returns a pointer to a newly
 * allocated space in memory
 *
 *  @str: string
 *
 *  Return: pointer
 */
char *_strdup(char *str)
{
	char *dup, *store_dup;
	int len;

	len = _strlen(str);

	if (!str)
		return (NULL);

	dup = malloc((len + 1) * sizeof(char));

	store_dup = dup;

	while (*str)
	{
		*store_dup = *str;
		store_dup++;
		str++;
	}
	*store_dup = '\0';

	return (dup);
}
