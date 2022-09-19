#include "main.h"

/**
 * print_rev - Function that prints a string
 * in reverse followed by a new line
 * @s: first arguement for the function
 * Return: 0
 */
void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != 0; n++)
	{
	}
	for (n = n - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
