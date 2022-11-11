#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - Prints the result of simple operations
*@argc: number of arguments
*@argv: array of pointers
*Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
char *op;
/*if the number of arguments is wrong, print Error*/
/* exit with the status 99*/
if (argc != 4)
{
printf("Error\n");
exit(98);
}
/*use the atoi to convert the string input to int*/
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = argv[2];
/*if the operator is none of the above, print Error*/
/*or in case the operator contains more than 1 character*/
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
/*if the user tries to divide (/ or %) by 0, print Error*/
if ((*op == '/' && num2 == 0) ||
(*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
/*print hte result*/
printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
