#include "lists.h"

/**
 * add_nodeint - prints all the elements of a list_t list.
 * @head: pointer to the head of the list
 * @n: integer n
 * Return: the the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
	*head = new_node;
}
else
{
	new_node->next = *head;
	*head = new_node;
}
return (new_node);
}
