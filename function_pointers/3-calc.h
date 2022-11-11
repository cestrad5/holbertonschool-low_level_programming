#ifndef CALC_H
#define CALC_H
#include <stdlib.h>
#include <stdio.h>
/**
* struct op - Struct op
*
* @op: The operator
* @f: The function associated
*/
/*This is the struct op given by the task*/
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;
/*prototypes for funtions*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/*prototype for the funtion that selects*/
/* the corret funtion fron de the adobe list*/
int (*get_op_func(char *s))(int, int);
#endif
