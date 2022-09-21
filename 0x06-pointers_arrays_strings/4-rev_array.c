#include "main.h"

/**
 * reverse_array - function that reverses the
 * content of an array of integers.
 * @a: first arguement for the function
 * @n: second arguement for the function
 * Return: 0 
 */
void reverse_array(int *a, int n)
{
	int i, j = n - 1, k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
	}
}
