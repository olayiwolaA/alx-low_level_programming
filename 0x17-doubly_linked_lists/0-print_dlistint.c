#include "lists.h"

/**
* print_dlistint - prints all the elements of a
* dlistint_t list
*
* @h: header of a list
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
int printele = 0;

for (i = 0; h != NULL; i++)
{
if (h->prev != NULL && printele == 0)
{
h = h->prev;
continue;
}
else if (h->prev == NULL)
{
printele = 1;
i = 0;
}
printf("%i\n", h->n);
h = h->next;

}
return (i);
}

