#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int ch;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
