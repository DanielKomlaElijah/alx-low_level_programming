#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 * @str: first arguement of function
 * Return: pointer to the array
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);
}
