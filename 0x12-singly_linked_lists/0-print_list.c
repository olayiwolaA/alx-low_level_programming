#include "lists.h"
/**
 * print_list - prints a linked list
 * @h: head of list
 *
 * Return: number of nodes in list as size_t
 */
size_t print_list(const list_t *h)
{
const list_t *link;
size_t nodes = 0;

link = h;
while (link != NULL)
{
printf("[%u] ", link->len);
if (!link->str)
printf("(nil)\n");
else
printf("%s\n", link->str);
link = link->next;
nodes++;
}
return (nodes);
}

