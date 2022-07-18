#include "lists.h"
/**
  * add_nodeint - add a new node at the beginning
  * @head: is the owner of the dog
  * @n: is a number
  *
  * Return: pointer to new head of list, NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}

