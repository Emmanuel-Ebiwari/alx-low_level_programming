#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar("%c", ch);
	}

	return (0);
}
