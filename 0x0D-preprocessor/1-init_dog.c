#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to the adress to initialize.
 * @name: The dog's name'.
 * @age: The dog's age'.
 * @owner: The dog owner's name.
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
