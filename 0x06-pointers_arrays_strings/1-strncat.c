#include "main.h"

/**
 * *_strncat - function that concatenates
 * two strings
 * @dest: first arguement for the function
 * @src: second arguement for the function
 * @n: third argument for the function
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
