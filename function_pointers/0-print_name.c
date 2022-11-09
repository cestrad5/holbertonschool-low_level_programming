#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - a function that prints a name
* @name: name to be printed
* @f: A pointer to a function
*/
void print_name(char *name, void (*f)(char *))
{
/**if name or f are NULL exit*/
if (name == NULL || f == NULL)
return;
f(name);
}
