#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase excepts
 * q and e, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e' || ch == 'q')
	continue;
	else
        putchar(ch);
	}
	putchar('\n');
	return (0);
}
