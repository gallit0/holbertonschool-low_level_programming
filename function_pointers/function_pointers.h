#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <string.h>
void _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
