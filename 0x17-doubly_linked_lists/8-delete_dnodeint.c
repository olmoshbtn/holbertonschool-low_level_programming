#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node for a doubly linked list
 * @head: pointer to a pointer to the beginning of a doubly linked list
 * @index: the index of the node to remove
 *
 * Return: 1 upon success, -1 upon failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for ( ; index != 0; --index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->next = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
