#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: program that prints the alphabet
 * in reverse, followed by a new line
 *
 * Return: 0 for success
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
