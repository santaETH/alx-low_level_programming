#include "lists.h"

/**
 * get_nodeint_at_index - The nth node of a listint_t linked list.
 * @head: pointer of the first node.
 * @index: index is the index of the node.
 *
 * Return: pointer to index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
