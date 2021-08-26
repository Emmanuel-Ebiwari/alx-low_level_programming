#include <stdio.h>
/**
* my_function - This is a description
*/
int main(void)
{
	int intType;
	long int LIType;
	long long int LLIType;
	float floatType;
	double doubleType;
	char charType;
	
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(LIType));
	printf("Size of long long int: %zu byte\n", sizeof(LLIType));
	printf("Size of float: %zu byte\n", sizeof(floatType));
	return (0);
}
