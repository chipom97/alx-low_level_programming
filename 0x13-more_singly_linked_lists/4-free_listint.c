#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_node;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	head = (NULL);
}
