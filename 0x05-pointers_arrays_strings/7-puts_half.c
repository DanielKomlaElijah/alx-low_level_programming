#include "main.h"

/**
 * puts_half - function that prints half
 * string followed by a new line
 * @str: first arguement for the function
 * Return: 0
 */
void puts_half(char *str)
{
	int n, m;
	char c;

	for (n = 0; str[n] != 0; n++)
	{
	}
	if (n % 2 == 0)
	{
		for ((m = n / 2); str[m] != 0; m++)
		{
			c = str[m];
			_putchar(c);
		}
	}
	else
	{
		for ((m = (n - 1) / 2); str[m] != 0; m++)
		{
			c = str[m + 1];
			_putchar(c);
		}
	}
	_putchar('\n');
}
