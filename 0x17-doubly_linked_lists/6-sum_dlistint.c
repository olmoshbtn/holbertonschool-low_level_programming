#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of doubly linked list
 * @head: pointer to the head of a double linked list
 *
 * Return: the sum of all items in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
