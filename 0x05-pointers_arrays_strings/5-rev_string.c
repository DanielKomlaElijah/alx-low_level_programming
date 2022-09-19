#include "main.h"

/**
 * rev_string - function that reverses
 * a string
 * @s: first arguement for the function
 * Return: 0
 */
void rev_string(char *s)
{
	int n, rev;
	char c;

	for (n = '\0'; s[n] != 0; n++)
	{
	}
	rev = 0;
	for (n = n - 1; rev < n; rev++)
	{
		c = s[n];
		s[n] = s[rev];
		s[rev] = c;
		n--;
	}
}
