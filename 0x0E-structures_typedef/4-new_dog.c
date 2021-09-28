#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: Null or user
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, len1 = 0, len2 = 0;
	dog_t *my_dog;

	for (i = 0; name[i] != '\0'; i++)
	{
		len1++;
	}

	for (i = 0; owner[i] != '\0'; i++)
	{
		len2++;
	}

	my_dog = malloc(sizeof(dog_t));
	my_dog->name = malloc(len1 * sizeof(my_dog->name));
	my_dog->owner = malloc(len2 * sizeof(my_dog->owner));

	if (my_dog == NULL)
		return (NULL);

	for (j = 0; j <= len1; j++)
		my_dog->name[j] = name[j];

	my_dog->age = age;

	for (j = 0; j <= len2; j++)
		my_dog->owner[j] = owner[j];

	return (my_dog);
}
