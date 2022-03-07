#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: first operand a struct
 * Return: No return because void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Name: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
