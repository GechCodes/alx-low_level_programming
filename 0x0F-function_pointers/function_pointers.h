#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>

void print_name(char *name, void (*F)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif

