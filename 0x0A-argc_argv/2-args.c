#include <stdio.h>
#include <stdlib.h>

/**
  * main - print prints all arguments it receives
  * @argc: the length of the arguments
  * @argv: the arguments
  * Return: 0
  */

int main(int argc, char **argv)
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", *argv);
argv++;
}
return (0);
}

