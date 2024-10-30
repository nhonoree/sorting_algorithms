#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

// Define the listint_s structure
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /* SORT_H */
