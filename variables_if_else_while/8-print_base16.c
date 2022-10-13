#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the alphabet in lowercase fron z to a.
*
* Return: Always 0.
*/
int main(void)
{
int n;
char x;
for (n = 0; n <= 9; n++)
putchar((n % 10) + '0');
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
