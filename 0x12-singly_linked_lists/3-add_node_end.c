#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 *
 * Return: pointer to new element of list, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *listdup;
size_t n;

listdup = *head;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
for (n = 0; new->str[n] != '\0'; n++)
;
new->len = n;
if (*head == NULL)
{
new->next = *head;
*head = new;
}
else
{
while (listdup->next != NULL)
listdup = listdup->next;
new->next = (listdup)->next;
(listdup)->next = new;
}

return (*head);
}

