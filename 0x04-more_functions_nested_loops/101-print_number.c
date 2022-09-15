#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer arguement for the function
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}

	if ((m / 10) > 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}

