#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the length of the arguments
 * @argc: the length of the arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
if (**argv != '\0')
printf("%d\n", argc - 1);

return (0);
}

