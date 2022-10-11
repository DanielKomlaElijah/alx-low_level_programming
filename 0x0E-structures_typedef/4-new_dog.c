#include "dog.h"
#include <stdio.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: no return
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, n, o;

	dog = malloc(sizeof(*dog));
	if (dog == NULL || !(n) || !(o))
	{
		free(dog);
		return (NULL);
	}

	for (n = 0; name[n]; n++)
		;

	for (o = 0; owner[o]; o++)
		;

	dog->name = malloc(n + 1);
	dog->owner = malloc(o + 1);

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < o; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
