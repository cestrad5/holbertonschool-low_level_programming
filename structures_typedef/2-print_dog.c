#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - print the elements of the struct dog
* @d: element of data structure
* Return: void
*/
void print_dog(struct dog *d)
{
if (!d)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
