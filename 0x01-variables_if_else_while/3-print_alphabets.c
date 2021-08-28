#include <stdio.h>
/**
 * main - Prints Write a program that prints
 * the alphabet in lowercase, and then in
 * uppercase, followed by a new line.
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
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar(spc);

	return (0);
}
