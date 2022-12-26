#include "lists.h"
/**
* free_listint - function that frees a listint_t list
* @head: pointer to the firts node
* Return: nothing.
*/
void free_listint(listint_t *head)
{
listint_t *aux;

while (head)
{
	aux = head;
	head = head->next;
	free(aux);
}
}
