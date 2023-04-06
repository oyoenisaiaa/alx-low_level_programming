#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - a function that returns 1
 * if input is a prime number
 * @n: input entered
 * Return: a prime number or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - a function that returns 1
 * if input is a prime number
 * @n: input entered
 * @j: integer
 * Return: a prime numbere or 0 if not
 */
int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
