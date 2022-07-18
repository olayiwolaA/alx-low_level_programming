#include "lists.h"
/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t n_nodes = 0;
const listint_t *temp_h;

temp_h = h;
while (temp_h)
{
printf("%d\n", temp_h->n);
temp_h = temp_h->next;
n_nodes++;
}
return (n_nodes);
}

