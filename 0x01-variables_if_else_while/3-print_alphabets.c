#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: program that prints the alphabet
 * in lowercase, followed by a new line
 *
 * Return: 0 for success
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchart(alphabet);
	}
	putchar('\n');
	return (0);
}
