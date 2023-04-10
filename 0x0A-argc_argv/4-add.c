#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - a program that adds +ve numbers
 * if no number in argv[0], print 0, \n
 * if num contains symbol, print Error,\n, return 1
 * @argc: counts of arguments in the program
 * @argv: size of the array
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	unsigned int i, sum, num;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (sum);
}
