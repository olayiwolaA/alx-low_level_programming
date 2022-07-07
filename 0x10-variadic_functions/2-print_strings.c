#include "variadic_functions.h"
/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list mylist;
unsigned int i;
char *str;

va_start(mylist, n);

for (i = 0; i < n; i++)
{
str = va_arg(mylist, char *);

if (str != NULL)
printf("%s", str);
else
printf("(nil)");

if (separator != NULL && i != n - 1)
printf("%s", separator);
}
va_end(mylist);
printf("\n");
}

