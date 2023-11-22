#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: pointer to the head of the list
 * @n: integer n
 * Return: the the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *search;
	listint_t *insert_node = malloc(sizeof(listint_t));

	if (insert_node == NULL)
	{
		return (NULL);
	}
	insert_node->n = n;
	insert_node->next = NULL;
	if (*head == NULL)
	{
		*head = insert_node;
		return (insert_node);
	}

	search = *head;
	while (search->next != NULL)
	{
		search = search->next;
	}
	search->next = insert_node;
	return (insert_node);
}
