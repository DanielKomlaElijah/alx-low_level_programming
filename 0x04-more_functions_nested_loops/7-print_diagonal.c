#include "main.h"

/**
 * print_diagonal - function that draws a
 * diagonal line in the terminal
 *
 * @n: integer arguement for function
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
