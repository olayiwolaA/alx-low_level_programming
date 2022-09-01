#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;

if (*head == NULL)
{
new->next = NULL;
new->prev = NULL;
*head = new;
}
else
{
while ((*head)->prev != NULL)
(*head) = (*head)->prev;
(*head)->prev = new;
new->next = *head;
new->prev = NULL;
*head = new;
}
return (*head);
}

