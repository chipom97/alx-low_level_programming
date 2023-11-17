#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
list_t *next_node;
list_t *current;
current = head;
while (current != NULL)
{
next_node = current->next;
free(current->str);
free(current);
current = next_node;
}
}
