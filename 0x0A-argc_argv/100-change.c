#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make
 * change for an amount of money
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int ch, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	ch = atoi(argv[1]);

	while (cents > 0)
	{
		if (ch >= 25)
			ch -= 25;
		else if (ch >= 10)
			ch -= 10;
		else if (ch >= 5)
			ch -= 5;
		else if (ch >= 2)
			ch -= 2;
		else if (ch >= 1)
			ch -= 1;
		coins += 1;
	}
	printf("%d\n", coins);

	return (0);
}
