#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int (*ptrf)(int, int);
	int ret;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	} 
	ptrf = get_op_func(argv[2]);

	if (ptrf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ret = ptrf(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", ret);
	return (0);
}
