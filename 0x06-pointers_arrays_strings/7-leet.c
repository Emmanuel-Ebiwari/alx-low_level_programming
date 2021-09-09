#include "main.h"
/**
 * leet - encodes leet into 1337
 * @s: string
 *
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char str[] = "aeotl";
	char num[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == str[j] || s[i] == str[j] - 32)
			{
				s[i] = num[j];

			}
		}
	}

	return (s);
}
