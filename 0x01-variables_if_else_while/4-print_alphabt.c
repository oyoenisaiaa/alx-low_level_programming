#include <stdio.h>

/**
 * main - program entry point
 *
 * prints the alphabet, excluding q and e inlower case
 *
 * Return: always 0
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		if (chars == 'e' || chars == 'q')
			continue;
		putchar(chars);
	}
	putchar('\n');
	return (0);
}
