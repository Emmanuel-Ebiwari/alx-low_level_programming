#include "main.h"
#include <stdlib.h>
/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int i, sign = 1, resp = 0, firstNum;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * _puts - prints a string, followed by a new line, to
 * stdout
 *
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * 
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned long int mul, num1, num2;

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	if (argc != 3 || (*argv[1] < '0' || *argv[1] > '9') || (*argv[2] < '0' || *argv[2] > '9'))
	{
		printf("Error\n");
		exit(98);
	}

	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}
