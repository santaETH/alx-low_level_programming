#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t list and returns the data.
 * @head: pointer to pointer to the head list.
 * Return: The data of the head or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
