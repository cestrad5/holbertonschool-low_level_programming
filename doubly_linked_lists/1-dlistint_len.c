#include "lists.h"

/**
* dlistint_len - function that returns the number of elements in a doubly
* linked list.
* @h: pointer to list elements.
* Return: the number of elements.
*/

size_t dlistint_len(const dlistint_t *h)
{
int n = 0;

while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}
