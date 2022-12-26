#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* delete_nodeint_at_index - delete a node at index
* @head: head of the list
* @index: location of the node to delete
* Return: pointer to head of list
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *nxx;

if (!head || !*head)
	return (-1);
current = *head;
if (index == 0)
{
	*head = (*head)->next;
	free(current);
	return (1);
}
for (i = 0; i < (index - 1); i++)
{
	current = current->next;
	if (current == NULL)
		return (-1);
}
nxx = current->next;
current->next = nxx->next;
free(nxx);
return (1);
}
