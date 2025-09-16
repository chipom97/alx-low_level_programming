#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head
 * Return: integer
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	pop = *head;
	n = pop->n;
	*head = (*head)->next;
	free(pop);

	return (n);
}
