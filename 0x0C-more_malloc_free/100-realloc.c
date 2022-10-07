#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: first arguement of function
 * @old_size: second arguement of function
 * @new_size: third arguement of function
 * Return: pointer to the array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
