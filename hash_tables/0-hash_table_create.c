#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table.
* @size: size of the array.
* Return: a pointer to the created hash table or NULL.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
/*If size is no given*/
if (!size)
return (NULL);
/*reserve mamory for ht*/
ht = malloc(sizeof(hash_table_t));
/*if malloc fails return NULL*/
if (!ht)
return (NULL);
ht->size = size;
/*Resere and initialize in 0 the memory the array*/
ht->array = calloc(size, sizeof(hash_node_t *));
if (!ht->array)
{
free(ht);
return (NULL);
}
return (ht);
}
