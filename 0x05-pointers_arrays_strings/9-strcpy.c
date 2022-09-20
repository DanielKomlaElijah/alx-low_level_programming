#include "main.h"

/**
 * *_strcpy - function that copies the string
 * pointed to by src
 * @dest: first arguement for the function
 * @src: second arguement for the function
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int n, i;

	for (n = 0; src[n] != 0; n++)
	{
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0;

	return (dest);
}
