#include "main.h"
#include <stdio.h>
/**
 * init_dog - a function initializes a struct
 * @d: First operand
 * @name: Second operand
 * @age: third operand
 * @owner: fourth operand
 * Return: No return because it is void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner
	}
}