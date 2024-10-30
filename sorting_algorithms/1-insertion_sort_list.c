#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 *                       ascending order using the Insertion sort algorithm.
 *
 * @list: A pointer to the pointer of the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *temp;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;

    while (current != NULL)
    {
        temp = current;
        while (temp->prev != NULL && temp->n < temp->prev->n)
        {
            // Swap the nodes
            if (temp->prev->prev)
                temp->prev->prev->next = temp;

            if (temp->next)
                temp->next->prev = temp->prev;

            temp->prev->next = temp->next;
            temp->next = temp->prev;
            temp->prev = temp->prev->prev;

            if (temp->prev)
                temp->prev->next = temp;

            if (temp->prev == NULL)
                *list = temp;

            print_list(*list);  // Print the list after swap
        }
        current = current->next;
    }
}
