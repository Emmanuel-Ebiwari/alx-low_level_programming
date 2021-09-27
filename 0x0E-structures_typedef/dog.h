#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: character
 * @owner: character
 * @age: float
 *
 * Description: struct dog prototype
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
