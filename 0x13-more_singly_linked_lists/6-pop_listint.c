#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: return 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *savepoin;
int savenum;

if (*head != NULL)
{
savepoin = (*head)->next;
savenum = (*head)->n;
free(*head);
*head = savepoin;
return (savenum);
}
else
return (0);
}

