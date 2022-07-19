#include "lists.h"
/**
 * sum_listint - sums the n value of a linked list of listint_t
 * @head: head of list
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *headcopy;
	int sum = 0;

	headcopy = head;
	if (headcopy != NULL)
	{
		while (headcopy->next != NULL)
		{
			sum += headcopy->n;
			headcopy = headcopy->next;
		}
		sum += headcopy->n;
		return (sum);
	}
	else
		return (0);
}

