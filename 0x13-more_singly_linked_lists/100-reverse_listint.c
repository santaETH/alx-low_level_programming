#include "lists.h"

/**
 * reverse_listint - Reverese a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: Reverse to the first revesed list node of a pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
