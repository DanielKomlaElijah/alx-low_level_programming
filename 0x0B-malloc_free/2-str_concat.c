#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates
 * two strings
 * @s1: first arguement of function
 * @s2: second arguement of function
 * Return: pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	l = j;

	for (j = 0; j <= l; j++)
		s[k] = s2[j];

	return (s);
}
