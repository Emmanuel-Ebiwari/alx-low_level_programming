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
 * rev_string - reverses a string.
 *
 * @s: string
 */
void rev_string(char *s)
{
	int len, i;
	
	len = _strlen(s);

	for (i = len; i >= len; i--)
	{
		s[i];
	}

}
