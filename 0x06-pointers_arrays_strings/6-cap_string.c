#include "main.h"
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
/*	char d[] = ",\t;\n; .!?\"(){}";*/

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
			continue;
		}
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
				continue;
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] += 32;
		}
	}

	return (s);
}
