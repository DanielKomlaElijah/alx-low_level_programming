#include "main.h"

/**
 * _isdigit - function that checks for
 * a digit
 *
 * @c: int arguement of the function
 *
 * Return: 1 if c is digit 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
