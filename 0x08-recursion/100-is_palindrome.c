#include "main.h"

/**
 * is_palindrome - function that returns
 * 1 if string is palindrome and 0 if not
 * @s: first arguement for the function
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: first arguement for the function
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * pal - checks the characters recursively for palindrome
 * @s: first arguement for the function
 * @i: second arguement
 * @l: third arguement
 * Return: 1 if palindrome, 0 if not
 */
int pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (pal(s, i + 1, l - 1));
}
