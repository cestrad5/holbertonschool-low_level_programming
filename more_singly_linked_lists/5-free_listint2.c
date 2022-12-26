#include "lists.h"
/**
* free_listint2 - function that frees a listint_t lis
*  @head: pointer to the firts node
* Return: nothing.
*/
void free_listint2(listint_t **head)
{
listint_t *aux_free;

if (!head)
	return;
while (*head)
{
	aux_free = *head;
	*head = (*head)->next;
	free(aux_free);
}
}
