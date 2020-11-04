#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a first node of the linked list
 * @idx: the index of the searched node (starts at 0)
 * @n: element to add at the end of a list
 *
 * Return: address of the new node. If fails or the index is invalid, return NULL. 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	if (*head && idx)
        {
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
        }
	if (idx)
	{
		return (NULL);
	}
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
