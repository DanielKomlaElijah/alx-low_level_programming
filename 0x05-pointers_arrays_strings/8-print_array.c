#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements
 * an array followed by a new line
 * @a: first arguement for the function
 * @n: second arguement for the function
 * Return: 0
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m == 0)
			printf("%d", a[m]);
		else
			printf("%d", a[m]);
	}
	printf("\n")
}
