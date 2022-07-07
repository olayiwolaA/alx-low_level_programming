#ifndef MAIN_FUNCTIONS
#define MAIN_FUNCTIONS

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct op
{
char *op;
void (*f)(va_list);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
