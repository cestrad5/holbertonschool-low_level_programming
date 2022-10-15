#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @nld: number's last digit result
* Return: value of the last digit
*/
int print_last_digit(int nld)
{
int l;
l = (nld % 10);
if (l < 0)
{
l = (-1 * l);
}
_putchar(l + '0');
return (l);
}
