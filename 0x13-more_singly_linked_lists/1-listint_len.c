#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list.
 *
 * @h: head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	size_t count = 0;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
