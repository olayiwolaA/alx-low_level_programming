#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *pre, *headcopy = *head;
unsigned int i;

while (headcopy != NULL && headcopy->prev != NULL)
{
headcopy = headcopy->prev;
*head = (*head)->prev;
}
if (headcopy != NULL && index != 0)
{
for (i = 0; i < index && headcopy != NULL; i++)
{
pre = headcopy;
headcopy = headcopy->next;
}
if (headcopy != NULL)
{
pre->next = headcopy->next;
if (pre->next != NULL)
headcopy->next->prev = pre;
free(headcopy);
return (1);
}
return (-1);
}
if (headcopy != NULL && index == 0)
{
pre = headcopy->next;
if (pre == NULL)
*head = NULL;
else
{
pre->prev = NULL;
free(headcopy);
*head = pre;
}
return (1);
}
return (-1);
}

