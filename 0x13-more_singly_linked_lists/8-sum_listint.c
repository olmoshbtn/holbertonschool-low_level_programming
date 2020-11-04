#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: pointer to a first node of the linked list
 *
 * Return: sum of all elements, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	if (head)
	{
		return (head->n += sum_listint(head->next));
	}
	return (0);
}
