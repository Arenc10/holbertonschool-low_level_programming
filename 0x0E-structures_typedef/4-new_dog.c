#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: first operand
 * @age: second operand
 * @owner: third operand
 * Return: A pointer to a struct or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int owner_length = 0;
	int name_length = 0;
	dog_t *dog;

	for (i = 0; name[i] != '\0'; i++)
		name_length++;
	for (i = 0; owner[i] != '\0'; i++)
		owner_length++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (name_length + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);

}
