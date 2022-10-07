#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * using malloc
 * @b: first arguement of function
 * Return: pointer to the array
 */
void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
