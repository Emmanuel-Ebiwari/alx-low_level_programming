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
	unsigned int i, j, s1_len, s2_len, bytes;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n > s2_len)
		n = s2_len;

	bytes = s1_len + (s2_len - n);

	ptr = malloc(sizeof(char) * bytes);

	if (!ptr)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i] = '\0';

	return (ptr);
}
