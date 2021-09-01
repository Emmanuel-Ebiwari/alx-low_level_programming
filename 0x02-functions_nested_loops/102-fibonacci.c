#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers,
  * starting with 1 and 2, followed by a new line.
  *
  * Return: 0
  */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int sum = n1 + n2;
	int i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 3; i <= 50; ++i)
	{
		printf("%lu", sum);
		if (i < 50)
		{
			putchar(',');
			putchar(' ');
		}
		n1 = n2;
		n2 = sum;
		sum = n1 + n2;
	}
	printf("\n");
	return (0);
}
