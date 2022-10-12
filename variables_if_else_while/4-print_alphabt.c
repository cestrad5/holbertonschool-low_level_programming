#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the alphabet in lowercase but e and q.
*
* Return: Always 0.
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
if (x!='e' && x!='q')
{
putchar(x);
}
putchar('\n');
return (0);
}
