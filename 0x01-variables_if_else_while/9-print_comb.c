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
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
