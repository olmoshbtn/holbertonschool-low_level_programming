#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: pointer that contains address to the head pointer
 * @n: element to add at the beginning of a list
 *
 * Return: address of a new node or NULL if function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	if (!head)
	{
		return (NULL);
	}

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
