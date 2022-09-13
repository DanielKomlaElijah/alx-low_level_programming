#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints
 * all natural numbers from n to 98
 *
 * Description: print all natural numbers
 *
 * @n: int arguement of the function
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
