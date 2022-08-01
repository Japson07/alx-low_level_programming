#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to structure type dog
 * @name: pointer to char name
 * @age: age of dog
 * @owner: pointer to char owner
 *Return: no
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
