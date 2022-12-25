#include "lists.h"
/**
* listint_len - returns the number of elements in a linked list.
* @h: pointer to the firts node
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
int count = 0;

while (h)
{
count++;
h = h->next;
}

return (count);
}
