#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
/**/
count++;
}
return (count);
}

/**
 * listint_len - prints all the elements of a list_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
