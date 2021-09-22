#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: holds the condition for if a character
 * is a digit
 *
 * Return: ret
 */
int _isdigit(int c)
{
	int ret = c >= 48 && c <= 57;

	return (ret);
}
