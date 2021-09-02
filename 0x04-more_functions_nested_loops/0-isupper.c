#include <unistd.h>

/**
 * _isupper - checks for uppercase character.
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	int output = c >= 65 && c <= 90;

	return (output);
}
