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
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
