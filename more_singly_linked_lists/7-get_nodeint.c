#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t.
* @head: pointer to the list head
* @index: index to the node to find
* Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;

for (count = 1; count <= index; count++)
{
	head = head->next;
	if (!head)
		return (NULL);
}
return (head);
}
