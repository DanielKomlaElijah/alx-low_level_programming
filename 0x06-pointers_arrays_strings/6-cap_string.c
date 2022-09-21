#include "main.h"

/**
 * *cap_string - function that capitalizes
 * all words of a string.
 * @s: first arguement for the function
 * Return: 0
 */
char *cap_string(char *s)
{
	int i, j;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') &&
		(s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		 s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		 s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		 s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
		 || s[i - 1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}
