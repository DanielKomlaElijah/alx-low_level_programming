#include "main.h"

/**
 * *_strpbrk - function that searches a
 * string for any of a set of bytes
 * @s: first arguement for the function
 * @accept: second arguement for the function
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s);
		}
		s++;
	}

	return ('\0');
}
