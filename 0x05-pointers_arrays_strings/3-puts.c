#include "main.h"

/**
 * _puts - Function that prints a string
 * followed by a new line to stdout
 * @str: first arguement for the function
 * Return: 0
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
