#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: god's owner
 * Return: no return
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *nwd;

	nwd = malloc(sizeof(dog_t));
	if (!nwd)
	{
		free(nwd);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
	}
	for (j = 0; owner[j]; j++)
	{
	}
	nwd->name = malloc(i + 1);
	nwd->owner = malloc(j + 1);
	if (nwd->name == NULL || nwd->owner == NULL)
	{
		free(nwd->name), free(nwd->owner), free(nwd);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		nwd->name[k] = name[k];
	}
	nwd->name[k] = '\0';
	for (k = 0; k < j; k++)
	{
		nwd->owner[k] = owner[k];
	}
	nwd->owner[k] = '\0';
	nwd->age = age;
	return (nwd);
}
