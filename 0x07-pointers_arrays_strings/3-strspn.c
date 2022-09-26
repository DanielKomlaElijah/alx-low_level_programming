#include "main.h"

/**
 * _strspn - function that gets the
 * lenght of a prefix substring
 * @s: first arguement for the function
 * @accept: second arguement for the function
 * Return: a pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 1;
				break;
			}
		}
		if (k == 0)
			break;
	}

	return (i);
}
