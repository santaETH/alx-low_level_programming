#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head node.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head;
    const listint_t *fast = head;
    size_t count = 0;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        count++;
        printf("[%p] %d\n", (void *)slow, slow->n);

        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *)fast, fast->n);
            exit(98);
        }
    }

    return count;
}

