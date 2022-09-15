#include "main.h"

/**
 * _isupper - function that checks for
 * uppercase character
 *
 * @c: int arguement of the function
 *
 * Return: 1 if c is uppercase 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
