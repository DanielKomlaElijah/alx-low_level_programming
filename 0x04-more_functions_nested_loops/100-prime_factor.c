#include <stdio.h>

/**
 * main - a program that finds and prints the
 * largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int n, i;

	n = 612852475143;

	for (i  = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
