#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_copy;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		str_copy = strdup(str);
		if (str_copy == NULL)
		{
			free(new_node);
			return (NULL);
		}

	while (str[len])
		len++;

	new_node->str = str_copy;
	new_node->len = len;
	}

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
