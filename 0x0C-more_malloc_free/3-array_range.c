#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an
 * array of integers
 * @min: first arguement of function
 * @max: second arguement of function
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	char *pointer;
	unsigned int i;

	if (min > max)
		return (NULL);

	pointer = malloc(sizeof(*pointer) * ((max - min) + 1));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		pointer[i] = min;

	return (pointer);
}
