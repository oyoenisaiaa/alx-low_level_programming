#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0
 */
int main(void)
{
	int num = 0;

	do {
		printf("%d", num);
		num++;
	} while (num < 10);

	printf("\n");
	return (0);
}
