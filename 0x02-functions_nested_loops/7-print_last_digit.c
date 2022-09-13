#include "main.h"

/**
 * print_last_digit - function that prints
 * the last digit of a number
 *
 * @n: int arguement of the function
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * -1;
	}

	_putchar(n + '0');
	return (n);
}
