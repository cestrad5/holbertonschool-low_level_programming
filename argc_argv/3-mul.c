#include <stdio.h>
#include <stdlib.h>

/**
* main - Write a program that prints all arguments it receives
* @argc: parameter
* @argv: array
* Return: 0
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
  printf("%s\n", "Error");
return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
