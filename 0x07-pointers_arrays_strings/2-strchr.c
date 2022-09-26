#include "main.h"

/**
 * *_strchr - function that locates a
 * character in a string
 * @s: first arguement for the function
 * @c: second arguement for the function
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
