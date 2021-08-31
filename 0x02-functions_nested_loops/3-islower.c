#include "main.h"
/**
 * _islower - checks for lowercase character.
 *
 * @c - holds the condition for if a character
 * is lower case
 *
 * Return: ret
 */
int _islower(int c)
{
	int ret = c >= 97 && c <= 122;

	return (ret);
}
