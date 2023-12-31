#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

/**
 * struct listint_s - Doubly linked
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * struct listint_a - linked list for radix sorting
 *
 * @n: value of a node
 * @next: points to next node
 */
typedef struct listint_a
{
	int n;
	struct listint_a *next;
} listint_b;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
#endif