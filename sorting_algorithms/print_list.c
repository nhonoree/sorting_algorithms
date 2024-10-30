#include "sort.h"

/**
 * print_list - Prints the elements of a doubly linked list.
 * @list: A pointer to the head of the list.
 */
void print_list(const listint_t *list)
{
    const listint_t *current = list;

    while (current != NULL)
    {
        printf("%d", current->n);  // Print the node's value
        if (current->next != NULL)
            printf(", ");  // Print a comma and space if not the last element
        current = current->next;  // Move to the next node
    }
    printf("\n");  // Print a new line at the end
}
