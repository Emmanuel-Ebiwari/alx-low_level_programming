#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers,
  * starting with 1 and 2, followed by a new line.
  *
  * Return: 0
  */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int sum = n1 + n2;
	int i;

	printf("%i, %i, ", n1, n2);
	for (i = 3; i <= 50; ++i)
	{
		printf("%i, ", sum);
		n1 = n2;
		n2 = sum;
		sum = n1 + n2;
	}
	printf("\n");
	return (0);
}
