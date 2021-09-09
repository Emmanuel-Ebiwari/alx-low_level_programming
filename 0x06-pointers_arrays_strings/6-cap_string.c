#include "main.h"
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
 * string_toupper - changes all lowercase letters of
 * a string to uppercase
 *
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		else if (s[i] >= 65 && s[i] <= 90)
			s[i] -= 0;
		i++;
	}
	return (s);
}
