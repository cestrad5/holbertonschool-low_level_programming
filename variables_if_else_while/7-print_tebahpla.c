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
char x;
for (x = 'z'; x >= 'a'; x = x - 1)
putchar(x);
putchar('\n');
return (0);
}
