#include "main.h"
/**
 * isSqrt - returns the natural square root of a number
 *
 * @n: integer
 * @i: integer
 *
 * Return: the square root of n
 */
int isSqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (isSqrt(n, i + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (isSqrt(n, 2));
}
