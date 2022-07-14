#include "lists.h"
/**
 * list_len - gets the linked lists number of nodes
 * @h: head of list
 *
 * Return: number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
size_t list;

for (list = 0; h != NULL; list++)
h = h->next;
return (list);
}

