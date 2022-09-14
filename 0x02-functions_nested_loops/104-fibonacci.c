#include <stdio.h>

/**
 * main - function that prints
 * first 50 fibonnacci number
 *
 * Description: print first 50 fibo
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	long int n1, n2, fib;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);

	for (i = 0; i < 48; i++)
	{
		fib = n1 + n2;
		printf(", %ld", fib);
		n1 = n2;
		n2 = fib;
	}
	printf("\n");
	return (0);
}
