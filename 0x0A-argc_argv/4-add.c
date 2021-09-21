#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= '0' && *argv[i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
		}

	argc > 1 ? printf("%d\n", sum) : printf("0\n");
	return (0);
}