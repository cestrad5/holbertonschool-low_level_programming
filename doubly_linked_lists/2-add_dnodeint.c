#include "lists.h"

/**
* add_dnodeint - function that adds a new node at the beginning of a dlistint_t list.
* linked list.
* @head: head of the list.
* @n: integer data.
* Return: the address of the new element, or NULL if fails.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_head;

/* reserve memory space for the new node. */
new_head = malloc(sizeof(dlistint_t));
/* Validate malloc. */
if (!new_head)
{
free(new_head);
return (NULL);
}

/* add the data */
new_head->n = n;
/* Next to the new head will be the old head. */
new_head->next = *head;
new_head->prev = NULL;
if (*head != NULL)
(*head)->prev = new_head;
*head = new_head;

return (new_head);
}
