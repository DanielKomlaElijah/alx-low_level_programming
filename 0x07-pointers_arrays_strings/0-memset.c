#include "main.h"

/**
 * *_memset - function that fills memory
 * with a constant byte
 * @s: first arguement for the function
 * @b: second arguement for the function
 * @n: third arguement for the function
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
