#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name field for the dog
 * @age: Actually age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to a new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;
	char *my_name = NULL;
	char *my_owner = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_name = _strdup(name);
	if (my_name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_owner = _strdup(owner);
	if (my_owner == NULL)
	{
		free(my_name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = my_name;
	my_dog->age = age;
	my_dog->owner = my_owner;

	return (my_dog);
}


/**
 * _strdup - Duplicate a string
 * Description: Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter. This can be freed whith
 * free().
 * @str: pointer to the string to duplicate
 *
 * Return: A pointer to the newly allocated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}
