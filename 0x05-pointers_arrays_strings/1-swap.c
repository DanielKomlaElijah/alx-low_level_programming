#include "main.h"

/**
 * swap_int - Function that swaps the values
 * two integers
 * @a: first arguement for the function
 * @b: second arguement for the function
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = *n;
}
