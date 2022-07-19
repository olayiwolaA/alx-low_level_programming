#include "lists.h"
/**
 * get_nodeint_at_index - gets a node of linked list at specific index
 * @head: head of list
 * @index: index to pull node from
 *
 * Return: pointer to node at specified index, NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp_h;
unsigned int i;

temp_h = head;
if (temp_h != NULL)
{
for (i = 0; (i < index) && (temp_h != NULL); i++)
temp_h = temp_h->next;
return (temp_h);
}
else
return (NULL);
}

