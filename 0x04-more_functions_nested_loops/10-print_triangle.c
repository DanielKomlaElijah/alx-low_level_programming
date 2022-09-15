#include "main.h"

/**
 * print_triangle - function that prints a
 * triangle
 *
 * @size: integer arguement for function
 *
 * Return: 0
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
