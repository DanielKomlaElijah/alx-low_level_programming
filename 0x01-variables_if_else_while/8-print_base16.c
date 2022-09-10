#include <stdio.h>

/**
 * main - print all numbers of base 16
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
	char alphabet;

	for (n = 48; n < 58;n++)
	{
		putchar(n);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
