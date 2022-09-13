#include <stdio.h>

/**
 * main - function that prints
 * all natural numbers
 *
 * Description: print all natural numbers
 *
 * Return: 0 for success
 */
int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;
	}

	printf("%d\n", j);
	return (0);
}
