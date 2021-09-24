#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to concatenate
 *
 * Return: pointer to new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *ptr;

	len = 0;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0;s1[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		s1[len + i] = s2[i];
	}
	s1[len + i] = '\0';

	return (s1);
}
