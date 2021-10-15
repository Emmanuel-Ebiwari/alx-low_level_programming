#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer
 * @index: index of n
 *
 * Return: 1 if succesful  or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = *n | (1 << index);

	if (index < 32)
	{
		*n = bit;
		return (1);
	}

	return (-1);
}
