#include "main.h"
/**
 * rot13 - encodes a string using rot13
 *
 * @s: string
 *
 * Return: string
 */
char *rot13(char *s)
{
	int i, j;
	char a1[] = "abcdefghijklm";
	char a2[] = "nopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == a1[j])
				s[i] = a2[j];
			else if (s[i] == a1[j] - 32)
				s[i] = a2[j] - 32;
			else if (s[i] == a2[j])
				s[i] = a1[j];
			else if (s[i] == a2[j] - 32)
				s[i] = a1[j] - 32;
		}
	}

	return (s);
}
