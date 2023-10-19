#include <stdio.h>

/**
 * execute_before_main - execute before main function starts running
 * Note: This function was declared before of "__attribute__ ((constructor))"
 */

void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
