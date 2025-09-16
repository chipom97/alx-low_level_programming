#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 *
 * @head:head
 * @index: index
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);

}
