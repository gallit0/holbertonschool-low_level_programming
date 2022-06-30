#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int a, int b);
int main(int argc, char *argv[]);

typedef struct ops
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
