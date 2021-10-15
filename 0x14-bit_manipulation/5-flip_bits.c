#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: integer
 * @m: amount of n
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	n = n ^ m;

	while (n > 0)
	{
		count++;
		n &= (n-1);
	}
	return (count);
}
