#include "lists.h"
/**
 * dlistint_len - return number of elements
 * @h: head pointer
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t n;

n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
