#include <stdio.h>

/**
  * main -  finds and prints the sum of the even-valued
  * terms, followed by a new line.
  *
  * Return: 0
  */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int sum = n1 + n2;
	int i;

	printf("%li, %li, ", n1, n2);
	for (i = 3; i <= 50; ++i)
	{
		if ((sum % 2 == 0) || sum <= 4000000)
		{
			printf("%li", sum);
			if (i < 50)
			{
				putchar(',');
				putchar(' ');
			}
		}
		else
		{
			continue;
		}
		n1 = n2;
		n2 = sum;
		sum = n1 + n2;
	}
	printf("\n");
	return (0);
}
