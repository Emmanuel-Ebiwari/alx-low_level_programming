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
 * _puts_half - prints half of a string, followed by a new line
 *
 * @str: string
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i, half;

	half = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;

	for (i = half; i < len; i++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
