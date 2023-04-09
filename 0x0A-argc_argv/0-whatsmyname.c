#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: counts of arguments in the program
 * @argv: size of the array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
