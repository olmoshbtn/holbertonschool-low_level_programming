#include <stdlib.h>
#include "dog.h"

int _str_len(char *str);
char *_strdup(char *str);

/**
 * new_dog - function creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Return: pointer to a new dog, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *nombre, *dueno;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	nombre = _strdup(name);
	if (nombre == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	dueno = _strdup(owner);
	if (dueno == NULL)
	{
		free(nombre);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = nombre;
	new_dog->age = age;
	new_dog->owner = dueno;

	return (new_dog);
}

/**
 * _strdup - returns a pointer to a copy of the string
 * @str: pointer
 *
 *
 * Return: pointer to the duplicated string. NULL if insufficient memory
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = _str_len(str);
		ptr = (char *) malloc((len + 1) * sizeof(char));

		if (ptr == NULL)
		{
			return (NULL);
		}
		while (i < len)
		{
			ptr[i] = str[i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
}

/**
 * _str_len - length of a string
 * @str: pointer
 *
 *
 * Return: return large of a string
 */

int _str_len(char *str)
{

	int len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
