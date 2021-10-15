#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 *
 * @n: integer
 * @index: index of n
 *
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = n >> index;

	if (index < 32)
		return (bit & 1);

	return (-1);
} 
