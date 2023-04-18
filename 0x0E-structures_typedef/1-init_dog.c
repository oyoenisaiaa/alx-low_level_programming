#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes
 * a variable of type struct dog
 * @d: variable, dog to be initialized
 * @name: variable, name of the dog
 * @age: variable, age of the dog
 * @owner: variable, owner of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = (struct dog *)malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
