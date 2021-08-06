#include <stdio.h>

void hi(void) __attribute__ ((constructor));

/**
 * hi - prints before main
 */
void hi(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
