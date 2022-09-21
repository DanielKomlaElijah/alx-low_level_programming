#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first arguement for the function
 * @s2: second arguement for the function
 * Return: a pointer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
