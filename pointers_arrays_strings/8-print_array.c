#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of Integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n) /*int a-> array n->long du tab*/

{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");

}
