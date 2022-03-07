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
	int ownerLength = 0;
	int nameLength = 0;

	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; dog->name[i] != '\0'; i++)
		nameLength++;
	dog->name = malloc(sizeof(char) * (nameLength + 1));
	if (dog->name == NULL)
		free(dog);
		return (NULL);
	for (i = 0; dog->owner[i] != '\0'; i++)
		ownerLength++;
	if (dog->owner == NULL)
		free(dog->name);
		free(dog);
		return (NULL);
	dog->age = age;
	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		dog->owner[i] = name[i];
	dog->name[i] = '\0';
	return (dog);

}
