#include "lists.h"

/**
* list_len - Prints list len
* @h: Pointer to a list
*
* Return: Number of nodes
*/
size_t list_len(const list_t *h)
{
int count = 0;
/*check if the pointer to the head exit*/
while (h != NULL)
{
/*If the head has not values prints...*/
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
/*Now h will point to the next element of list*/
h = h->next;
count++;
}
}
return (count);
}
