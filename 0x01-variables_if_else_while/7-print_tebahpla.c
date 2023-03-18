#include <stdio.h>

/**
 * main - program entry point
 *
 * prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: always zero
 */
int main(void)
{
	char chars;

	for (chars = 'z'; chars >= 'a'; chars--)
		putchar(chars);
	putchar('\n');

	return (0);
}
