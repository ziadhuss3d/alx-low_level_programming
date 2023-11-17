#include <stdio.h>

/**
 * construct - get executed before the main function
 */
void construct(void) __attribute__ ((constructor));

void construct(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
