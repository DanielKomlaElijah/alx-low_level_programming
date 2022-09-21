#include "main.h"

/**
 * *_strcat - function that concatenates
 * two strings
 * @dest: first arguement for the function
 * @src: second arguement for the function
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	int m = 0;

	while (dest[n] != '\0')
		n++

	while (src[m] != '\0')
	{
		dest[n] = src[m];
		m++;
		n++;
	}

	return (dest);
}
