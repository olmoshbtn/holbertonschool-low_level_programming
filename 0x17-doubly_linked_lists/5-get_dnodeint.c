#include "lists.h"

/**
 * get_dnodeint_at_index - get a node from a dobly linked list
 * @head: pointer to the head doubly linked list
 * @index:the index of the searched node
 *
 * Return: If the requested node does not exist, return NULL.
 * Otherwise, return a pointer to the requested node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
	{
		for (; index != 0; index--)
			head = head->next;
		return (head);
	}
	return (NULL);
}
