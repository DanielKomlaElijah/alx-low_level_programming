#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all
 * the arguments of your program
 * @ac: first arguement of function
 * @av: second arguement of function
 * Return: pointer to the array
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	return (s);
}
