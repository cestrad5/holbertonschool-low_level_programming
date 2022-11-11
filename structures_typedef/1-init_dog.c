#include <stdlib.h>
#include "dog.h"
/**
* struct dog - dog database struct
* @name: pointer to the dog name
* @age: age of the dog
* @owner: pointer to the dog's owner name
* @d: pointer to an element of struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
