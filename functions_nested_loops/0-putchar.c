#include "main.h"
/**
* main - Write a program that prints _putchar, followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
char xx = "_putchar";
while (xx)
{
_putchar(xx);
xx++;
}
_putchar('\n');
return (0);
}
