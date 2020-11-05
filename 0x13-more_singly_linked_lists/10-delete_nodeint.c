#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: pointer to a first node of the linked list
 * @index: the index of the searched node (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	unsigned int count = 0;

	if (!head || !aux || index == NULL)
	{
		return (-1);
	}

	while (head != NULL && count != index)
	{
		count++;
		head = &(*head)->next;
	}
	aux = (*head)->next;
	free(*head);
	*head = aux;

	return (1);
}
