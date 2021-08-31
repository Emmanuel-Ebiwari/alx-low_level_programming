#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: integer
 * Return: 0
 */
int _abs(int n)
{
	int ret = (n < 0) ? (-n) : (n);

	return (ret);
}
