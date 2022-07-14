#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node t the beginning of a list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 *
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
size_t list;

temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
temp->str = strdup(str);
if (temp->str == NULL)
{
free(temp);
return (NULL);
}
for (list = 0; temp->str[list] != '\0'; list++)
;
temp->len = list;
temp->next = *head;
*head = temp;
return (*head);
}

