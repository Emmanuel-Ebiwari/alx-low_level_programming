#include <stdio.h>
/**
 * main - Prints the size of various types on
 * the computer it is compiled and run on.
 * @intType: First variable
 * @charType: Second variable
 * @LIType: third variable
 * @LLIType: fourth variable
 * @floatType: fifth variable
 *
 * Description: This is a longer description.
 *
 * Return: The sum of the two parameters
 */
int main(void)
{
	int intType;
	long int LIType;
	long long int LLIType;
	float floatType;
	char charType;
	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(LIType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(LLIType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
