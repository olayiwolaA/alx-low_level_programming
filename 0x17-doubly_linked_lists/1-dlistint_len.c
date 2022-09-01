#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
int num_ele = 0;

for (i = 0; h != NULL; i++)
{
if (h->prev != NULL && num_ele == 0)
{
h = h->prev;
continue;
}
else if (h->prev == NULL)
{
num_ele = 1;
i = 0;
}
h = h->next;
}
return (i);
}

