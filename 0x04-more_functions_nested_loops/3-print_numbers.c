#include "main.h"
/**
 * print_numbers -  prints the numbers, from 0 to 9.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
char print_num;
for (print_num = 0; print_num < 10; print_num++)
_putchar(print_num + '0');
_putchar('\n');
}
