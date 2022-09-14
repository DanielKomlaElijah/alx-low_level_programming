#include <stdio.h>

/**
 * main - function that prints
 * fibo sequence
 *
 * Description: print fibo sequence
 *
 * Return: 0 for success
 */
int main(void)
{
	long int n1, n2, fib, fib2;

	n1 = 1;

	n2 = 2;

	fib = fib2 = 0;

	while (fib <= 4000000)
	{
		fib = n1 + n2;
		n1 = n2;
		n2 = fib;
		if ((n1 % 2) == 0)
		{
			fib2 += n1;
		}
	}
	printf("\n", fib2);
	return (0);
}
