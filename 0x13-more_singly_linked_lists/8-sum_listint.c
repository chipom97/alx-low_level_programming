#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data
 *
 * @head: head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *add;

	add = head;
	while (add)
	{
		sum += add->n;
		add = add->next;
	}
	return (sum);
}
