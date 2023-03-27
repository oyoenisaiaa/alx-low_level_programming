#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first
 * @b: second
 * Retunrn: always zero
 */

void swap_int(int *a, int *b)
{
	/*assign integer and swap*/
	int i = *a;
	int j = *b;
	*a = j;
	*b = i;
}
