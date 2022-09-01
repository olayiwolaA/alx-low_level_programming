#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *headcopy;
unsigned int i;

headcopy = head;
if (headcopy != NULL)
{
while (headcopy->prev != NULL)
headcopy = headcopy->prev;

for (i = 0; (i < index) && (headcopy != NULL); i++)
headcopy = headcopy->next;
return (headcopy);
}
else
return (NULL);
}

