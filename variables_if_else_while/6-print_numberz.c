#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the numbers 0 to 9.
*
* Return: Always 0.
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
putchar((n % 10) + '0');
putchar('\n');
return (0);
}
