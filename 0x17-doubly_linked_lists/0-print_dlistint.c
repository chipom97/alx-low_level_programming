#include "lists.h"

/**
 * print_dlistint - print elements
 * @h: head pointer
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t n;
n = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
n++;
}
return (n);
}
