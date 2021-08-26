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
	char charType;
	printf("Size of char: %c bytes\n", sizeof(charType));
	printf("Size of int: %i bytes\n", sizeof(intType));
	printf("Size of long int: %li bytes\n", sizeof(LIType));
	printf("Size of long long int: %lli byte\n", sizeof(LLIType));
	printf("Size of float: %f byte\n", sizeof(floatType));
	return (0);
}
