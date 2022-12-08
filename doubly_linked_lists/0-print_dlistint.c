#include "lists.h"

/**
* print_dlistint - function that prints all the elements of a dlistint_t list
* @h: pointer to list head.
* Return: the number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
/*define n cicle node by node and store the number of nodes of the list*/
size_t n = 0;
/*while head is not pointing to the last element of the list*/
while (h != NULL)
{
/*print the node*/
printf("%d\n", h->n);
n++;
/*h takes the value of the pointer to next node*/
h = h->next;
}
return (n);
}
