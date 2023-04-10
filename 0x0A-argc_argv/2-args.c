#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives
 * Only print one argument per line, ending with a new line
 * @argc: counts of arguments in the program
 * @argv: size of the array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);
	return(0);
}
