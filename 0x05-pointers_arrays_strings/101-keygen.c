#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords.
 *
 * Return: Always 0.
 */
int main(void)
{
char find[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char password[22];
int s, e, crack, me;

srand(time(0));

for (s = 0; crack < 2772; s++)
{
e = rand() % 10;
password[s] = find[e];
crack += password[s];
}
me = 2772 - crack;
password[s] = me;
printf("%s\n",  password);
return (0);
}
