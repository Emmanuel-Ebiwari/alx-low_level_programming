#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: holds query
 *
 * Return: ret
 */
int _isalpha(int c)
{
	int ret = (c >= 97 && c <= 122) || (c >= 65 && c <= 90);
	
	return (ret);
}
