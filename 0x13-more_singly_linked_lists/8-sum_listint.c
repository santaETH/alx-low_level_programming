#include "lists.h"

/**
 * sum_listint - return the sum of all the data n in a listint_t list.
 * @head: Pointer to the head of a list.
 *
 * Return: Sum of all data, or zero if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
