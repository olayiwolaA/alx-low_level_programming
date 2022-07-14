#include <stdio.h>
void print_construct(void) __attribute__((constructor));
/**
 * print_construct - function that prints before
 * the main function is executed
 *
 * Return: always void
 */
void print_construct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

