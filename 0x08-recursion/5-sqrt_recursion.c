#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return( _sqrt_recursion((n + n / n) / 2));
}
