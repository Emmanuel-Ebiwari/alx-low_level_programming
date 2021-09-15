#include "main.h"
/**
 * isPrime - checks if a number is a prime number
 *
 * @n: integer
 * @i: integer
 *
 * Return: prime number
 */
int isPrime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i == 2 && n % i != 0)
		return (1);

	return (isPrime(n, i - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0
 *
 * @n: integer
 *
 * Return: returns 1 or 0
 */
int is_prime_number(int n)
{
	return (isPrime(n, n - 1));
}
