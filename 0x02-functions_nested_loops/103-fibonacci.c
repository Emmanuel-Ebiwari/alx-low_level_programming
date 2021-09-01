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
	while(sum  < 4000000)
	{
		if (sum % 2 == 0)
		{
			printf("%li", sum += sum);
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
