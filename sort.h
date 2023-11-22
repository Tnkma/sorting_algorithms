#ifndef SORT_H
#define SORT_H


/**
 * struct listint_s - Doubly linked list node
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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(int *element_a, int *element_b);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
size_t partition(int *array, ssize_t low, ssize_t high, size_t size);
void quick_sort(int *array, size_t size);
void quicksort(int *array, ssize_t low, ssize_t high, size_t size);
void swaps(listint_t **list, listint_t *node);
void cocktail_sort_list(listint_t **list);
void Two_sort_Merge(size_t start, size_t middle, size_t end, int *dest, int *source);
void TDSplitMerge(size_t start, size_t end, int *array, int *copy);
void merge_sort(int *array, size_t size);
void bitonic_compare(char up, int *array, size_t size);
void bitonic_merge(char up, int *array, size_t size);
void bit_sort(char up, int *array, size_t size, size_t t);
void bitonic_sort(int *array, size_t size);
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);
void quick_sort(int *array, ssize_t lo, ssize_t hi, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
