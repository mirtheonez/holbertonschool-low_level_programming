#include <stdio.h>
/**
 * before_main - function that print strinf before the main functionis excuted
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"

			"I bore my house upon my back!\n");

}
