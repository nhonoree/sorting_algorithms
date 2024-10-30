#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: A pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *temp = NULL;
    listint_t *current = *list;

    if (list == NULL || *list == NULL)
        return;

    while (current != NULL)
    {
        temp = current->next;
        while (current->prev != NULL && current->n < current->prev->n)
        {
            /* Swap nodes */
            if (current->prev->prev)
                current->prev->prev->next = current;
            if (temp)
                temp->prev = current->prev;

            current->prev->next = temp;
            current->prev->prev = current;

            /* Update current */
            current->prev = current->prev->prev;
            if (current->prev)
                current->prev->next = current;
            else
                *list = current;  // Update head of the list if needed
        }
        current = temp;
    }
}
