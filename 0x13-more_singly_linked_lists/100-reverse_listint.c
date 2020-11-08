#include "lists.h"

/**
 * *reverse_listint - reverse linked list
 * @head: pointer to a pointer of linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux1, *aux2;

	if (*head == NULL)
	{
		return (NULL);
	}

	if ((*head)->next != NULL)
	{
		aux1 = *head;
		aux2 = (*head)->next;
		aux1->next = NULL;

		while (aux2->next != NULL)
		{
			*head = aux2;
			aux2 = (*head)->next;
			(*head)->next = aux1;
			aux1 = *head;
		}
		*head = aux2;
		(*head)->next = aux1;
	}
	return (*head);
}
