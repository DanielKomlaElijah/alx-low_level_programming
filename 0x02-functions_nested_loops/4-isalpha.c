#include "main.h"

/**
 * _isalpha - function that checks for
 * alphabetic character
 *
 * @c: int arguement of the function
 *
 * Return: 1 if c is a letter, lowercase
 * or upper case. 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
