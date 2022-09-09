#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: program that prints all sigle digit
 * numbers of base 10 starting from 0
 *
 * Return: 0 for success
 *
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
