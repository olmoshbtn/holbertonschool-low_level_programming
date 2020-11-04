#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer to a pointer to the first node
 *
 * Return: data sotred at the (new) head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *pop_first = *head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		*head = pop_first->next;
		data = pop_first->n;
		free(pop_first);
		return (data);
	}
}
