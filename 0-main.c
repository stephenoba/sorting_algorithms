#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {17181, 98, 14214, 4272, 9009, 8842, 3263, 15294, 3882, 3032, 9690, 9810, 26, 6203, 18931, 16288, 14892, 236, 18651, 8897, 8318, 3591, 1075, 19236, 5183, 16416, 3304, 15505, 15116, 14569, 19007, 12985, 13153, 16468, 4468, 1312, 2682, 11540, 12791, 8251, 6528, 18750, 535, 10271, 17067, 3940, 6950, 15149, 2478, 19173};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
