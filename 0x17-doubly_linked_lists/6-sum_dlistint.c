#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *headcopy;
int sum = 0;

headcopy = head;
if (headcopy != NULL)
{
while (headcopy->prev != NULL)
headcopy = headcopy->prev;

while (headcopy != NULL)
{
sum += headcopy->n;
headcopy = headcopy->next;
}
return (sum);
}
else
return (0);
}

