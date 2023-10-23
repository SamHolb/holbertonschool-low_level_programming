#include <stdio.h>

/**
 * swap_int - Swaps the values of two int
 * @a: The first int to be swapped
 * @b: The second int to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of 2 int */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
