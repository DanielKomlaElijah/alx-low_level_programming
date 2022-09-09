#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: program that prints the ch
 * in lowercase, followed by a new line
 *
 * Return: 0 for success
 *
 */
int main(void)
{
	char ch;

	for (ch = "a"; ch <= "z"; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
