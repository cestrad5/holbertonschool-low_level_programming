#include "main.h"
/**
* print_alphabet - Write a function that prints the alphabet, in lowercase, followed b*y a new line
*
* Return: Always 0 (Succes)
*/
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
