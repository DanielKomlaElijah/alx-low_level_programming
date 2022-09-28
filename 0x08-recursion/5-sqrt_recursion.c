#include "main.h"

/**
 * natural_sqrt - function that returns the
 * natural square of a number
 * @n: first arguement of unction
 * @i: second arguement of function
 * Return: square root
 */
int natural_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: first arguement for the function
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (natural_sqrt(n, 0));
}
