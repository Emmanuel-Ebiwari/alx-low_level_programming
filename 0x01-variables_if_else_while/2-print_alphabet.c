#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char ch;
	char spc = '\n';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar(spc);

	return (0);
}
