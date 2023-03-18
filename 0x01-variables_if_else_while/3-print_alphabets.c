#include <stdio.h>

/**
 * main - program entry point
 *
 * prints the alphabets in uper and lower case
 *
 * Return: always 0
 */
int main(void)
{
	char chars, CHARS;

	for (chars = 'a'; chars <= 'z'; chars++)
		putchar(chars);
	for (CHARS = 'A'; CHARS <= 'Z'; CHARS++)
		putchar(CHARS);
	putchar('\n');
	return (0);
}
