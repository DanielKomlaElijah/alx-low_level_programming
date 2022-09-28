#include "main.h"

/**
 * is_prime - function that returns the
 * natural square of a number
 * @n: first arguement of unction
 * @i: second arguement of function
 * Return: square root
 */
int is_prime(unsigned int n, unsigned int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - function that returns
 * 1 if input is prime number otherwise 0
 * @n: first arguement for the function
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
