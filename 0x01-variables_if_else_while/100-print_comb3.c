#include <stdio.h>

/**
 * main - print all possible combinations
 *
 * Description: program that prints the alphabet
 * in lowercase, followed by a new line
 *
 * Return: 0 for success
 *
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
