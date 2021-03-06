#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*needle != '\0')
	{
		while (*haystack)
		{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
		}
		needle++;
	}
	return (NULL);
}
