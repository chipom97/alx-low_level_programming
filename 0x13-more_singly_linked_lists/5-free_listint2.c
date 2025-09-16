#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
