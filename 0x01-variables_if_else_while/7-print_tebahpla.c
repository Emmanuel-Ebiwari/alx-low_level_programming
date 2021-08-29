#include <stdio.h>
/**
 * main - Prints Write a program that prints the
 * lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

