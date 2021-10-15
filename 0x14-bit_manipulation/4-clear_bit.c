#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer
 * @index: index of n
 *
 * Return: 1 if success -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = *n & ~(1 << index);

	if (index < 32)
	{
		*n = bit;
		return (1);
	}

	return (-1);
}
