#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - add new dog object
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	unsigned int i;
	dog_t *new = malloc(sizeof(*new));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new_name = malloc(sizeof(*new_name) * (strlen(name) + 1));
	new_owner = malloc(sizeof(*new_owner) * (strlen(owner) + 1));

	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(new);
		return (NULL);
	}

	for (i = 0; i < strlen(name); i++)
		new_name[i] = name[i];
	new_name[i] = '\0';

	for (i = 0; i < strlen(owner); i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';

	new->name = new_name;
	new->age = age;
	new->owner = new_owner;

	return (new);
}
