#include <stdlib.h>
#include "lists.h"  /* adjust the header name */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return -1;

    current = *head;

    /* find the node at position index */
    for (i = 0; current != NULL && i < index; i++)
    {
        current = current->next;
    }
    if (current == NULL)
        return -1;

    /* adjust links */
    if (current->prev != NULL)
        current->prev->next = current->next;
    else
        /* deleting the head node */
        *head = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return 1;
}
