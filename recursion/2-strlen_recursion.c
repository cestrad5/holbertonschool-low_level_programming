#include "main.h"
/**
* _strlen_recursion - count string length
* @s: string
* Return: length
*/

int _strlen_recursion(char *s)
{

/*If the sring's pointer is \0 the length is 0  */
if (*s == '\0')
{
return (0);
}
else
{
/*if not, 1 + length from s+1 */
return (1 + _strlen_recursion(s + 1));
}
}
