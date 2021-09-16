#include "main.h"
/**
 * _strlen - reverses string
 *
 * @s: string
 *
 * Return: string reverse
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(++s));
}


/**
 * isPalindrome - checks if string is palindrome
 *
 * @s: reverse string
 * @start: start index
 * @end : end index
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int isPalindrome(char s[], int start, int end)
{
	if (start == end)
		return (1);
	if (s[start] != s[end])
		return (0);
	if (start < end + 1)
		return (isPalindrome(s, start + 1, end - 1));
	return (1);
}

/**
 * is_palindrome - checks if string is palindrome
 *
 * @s: string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (isPalindrome(s, 0, len - 1));
}
