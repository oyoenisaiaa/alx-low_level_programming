#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies 2 numbers
 * sample numbers 1 and 2
 * if not 2 arg, print error, followed by /n
 * @argc: counts of arguments in the program
 * @argv: size of the array
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
		return (0);
	}
}
