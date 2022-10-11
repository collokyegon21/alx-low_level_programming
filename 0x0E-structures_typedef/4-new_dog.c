#include "dog.h"

/**
* _strlen - returns the length of a string
*
* @str: the string to length
*
* Return: the length of a string
*/

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
* *_strdup - allocates a new space in memory which contains
* a copy of the string given as a parameter
*
* @str: the string to duplicate
*
* Return: a pointer to the new string, or NULL if str = NULL or fail
*/

char *_strdup(char *str)
{
	char *new_str;
	int i = 0;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * _strlen(str) + 1);
	if (!new_str)
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/**
* *new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: newly created dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = _strdup(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strdup(owner);
	if (!new_dog->owner)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
