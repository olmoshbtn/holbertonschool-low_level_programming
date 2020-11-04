#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to a list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *free_node;

	if (!head)
	{
		return;
	}
	while (*head != NULL)
	{
		free_node = (*head)->next;
		free(*head);
		*head = free_node;
	}
}
