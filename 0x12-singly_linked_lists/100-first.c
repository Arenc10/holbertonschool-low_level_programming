#include <stdio.h>
void quote(void) __attribute__ ((constructor));
/**
 * quote - Prints before main is called
 */
void quote(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
