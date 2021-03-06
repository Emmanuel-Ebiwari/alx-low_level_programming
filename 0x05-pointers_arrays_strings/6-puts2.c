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
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by
 * a new line
 *
 * @str: string
 */
void puts2(char *str)
{
	int len, i;

	len = _strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
