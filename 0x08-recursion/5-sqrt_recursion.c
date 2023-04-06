#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: value for square root
 * Return: a natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: value for the square root
 * @j: integer
 * Return: a natural square root or -1
 */

int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
