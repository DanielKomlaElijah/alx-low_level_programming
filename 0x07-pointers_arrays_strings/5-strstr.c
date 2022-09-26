#include "main.h"

/**
 * *_strstr - function that locates a
 * substring
 * @haystack: first arguement for the function
 * @needle: second arguement for the function
 * Return: a pointer
 */
*_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
