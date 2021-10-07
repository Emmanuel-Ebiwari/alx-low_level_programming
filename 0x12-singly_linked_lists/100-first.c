#include <stdio.h>
/**
 * startup_func - executes code before main function
 */
void startup_func (void) __attribute__ ((constructor));

void startup_func(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
