#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for
 * an array, using malloc
 * @nmemb: first arguement of function
 * @size: second arguement of function
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		pointer[i] = 0;

	return (pointer);
}
