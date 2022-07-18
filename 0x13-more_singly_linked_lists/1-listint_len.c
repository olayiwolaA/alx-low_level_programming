#include "lists.h"
/**
 * listint_len - gets number of elements in linked list containing ints
 * @h: head of listint_t type
 *
 * Return: size_t, number of nodes.
 */
size_t listint_len(const listint_t *h)
{
size_t i;

for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}

