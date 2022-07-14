#include "lists.h"
/**
 * free_list - frees all elements in a linked list
 * @head: pointer to head element of list
 *
 * Return: always void
 */
void free_list(list_t *head)
{
list_t *clear;

clear = head;
while (clear)
{
if (clear->str)
free(clear->str);
free(clear);
clear = clear->next;
}
}

