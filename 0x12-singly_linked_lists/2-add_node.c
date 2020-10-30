#include "lists.h"

/**
 * _strlen - calculate the length of a string
 * @str: pointer to a string to calculate the length of
 *
 * Return: the length of the string
 */
size_t _strlen(const char *str)
{
	const char *str_copy = str;

	if (str)
	{
		while (*str_copy)
		{
			str_copy++;
		}
	}
	return (str_copy - str);
}

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: pointer that contain address to the head pointer
 * @str: pointer that contain string by a new beginning node
 *
 * Return: address of the new element, or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nod = NULL;

	if (!head)
	{
		return (NULL);
	}

	new_nod = (list_t *) malloc(sizeof(list_t));

	if (!new_nod)
	{
		return (NULL);
	}
	new_nod->str = strdup(str);
	new_nod->len = _strlen(str);
	new_nod->next = (*head);
	(*head) = new_nod;

	return (new_nod);
}
