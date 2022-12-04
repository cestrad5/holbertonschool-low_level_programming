#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of the list.
 * @str: the elements.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
/*define a to store the value of len*/
/*define cont to record the number of elements in list_t*/
int a, cont = 0;
/*define a n_node for the new node*/
list_t *n_node;
/*if head is null retrun null*/

if (head == NULL)
return (NULL);
/*reserve space in memory for the new node*/
n_node = malloc(sizeof(list_t));
if (n_node == NULL)
return (NULL);
/*count the number of characters of the str*/
for (a = 0; str[a] != '\0'; a++)
cont++;
/*now the len value is = a */
n_node->len = a;
/*strdup duplicate the value of the str*/
n_node->str = strdup(str);
/*next takes the value of the head*/
n_node->next = *head;
/*head thakes the value of the new node*/
*head = n_node;
return (n_node);
/*Free the space in memory*/
free(n_node);
}
