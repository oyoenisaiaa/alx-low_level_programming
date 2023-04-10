#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the
 * number of arguments passed into it
 * program should print a number
 * followed by a new line
 * @argc: counts of arguments in the program
 * @argv: size of the array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
