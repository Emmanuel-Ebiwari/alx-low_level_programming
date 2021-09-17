#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);

	printf("%d\n", atoi(sum));
	return (0);
	}
}
