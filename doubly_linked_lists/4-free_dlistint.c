#include "lists.h"

/**
* free_dlistint - function that frees a doubly linked list.
* @head: head of the list.
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *freex;

while (head)
{
freex = head;
head = head->next;
free(freex);
}
}
