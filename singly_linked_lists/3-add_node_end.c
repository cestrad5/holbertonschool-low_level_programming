#include "lists.h"
/**
* add_node_end - Adds a new node at the end of the list
* @head: pointer the head of the list_t list.
* @str: The string to be added to the list.
*
* Return: address of the new element.
*/

list_t *add_node_end(list_t **head, const char *str)
{
/*define copy_str to make a copy of the str*/
char *copy_str;
/*len to store size of the str*/
int len = 0;
list_t *new, *old;
/*reserve space for new*/
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
/*store str values in copy_str*/
copy_str = strdup(str);
/*if str is null free b and return NULL*/
if (str == NULL)
{
free(new);
return (NULL);
}
/*Count chars of str*/
for (len = 0; str[len];)
len++;
/*values for the new node including the Null value*/
new->str = copy_str;
new->len = len;
new->next = NULL;
/*If head is null(the list is empty), new takes the head place*/
if (*head == NULL)
*head = new;
else
{
old = *head;
while (old->next != NULL)
old = old->next;
old->next = new;
}
return (*head);
}
