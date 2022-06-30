#ifndef MAIN_FUNCTIONS
#define MAIN_FUNCTIONS
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct add_s
{
	char *n_add;
	int n_dig;
	int len_r;
	struct add_s *next;
} add_t;
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif

