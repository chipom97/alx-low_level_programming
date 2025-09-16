#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: head
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *p = head;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
