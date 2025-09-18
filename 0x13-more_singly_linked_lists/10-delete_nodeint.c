#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of list
 *
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *delete = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < (index - 1) && current != NULL; i++)
	{
		current = current->next;
		delete = delete->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	delete = current->next;
	current->next = delete->next;
	free(delete);
	return (1);
}
