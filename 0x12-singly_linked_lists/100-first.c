#include <stdio.h>

void before_main(void)__attribute__((constructor));

/**
 * before_main - a function that prints statements
 * before the main function and in new lines
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
