#include "main.h"

/**
 * *_memcpy - function that copies
 * memory area
 * @dest: first arguement for the function
 * @src: second arguement for the function
 * @n: third arguement for the function
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
