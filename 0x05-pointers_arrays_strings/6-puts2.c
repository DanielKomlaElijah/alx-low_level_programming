#include "main.h"

/**
 * puts2 - function that prints every other
 * character of a string
 * @str: first arguement for the function
 * Return: 0
 */
void puts2(char *str)
{
	int n;
	char c;

	for (n = 0; str[n] != 0; n++)
	{
		if (n % 2 == 0)
		{
			c = str[n];
			_putchar(c);
		}
	}
	_putchar('\n');
}
