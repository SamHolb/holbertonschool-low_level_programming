#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the 2 diagonals
 * @: Pointer to the square 
 * @size: size of the square
 */

void print_diagsums(int *a, int size) 
{
    int i;		
    int diag1_sum = 0; /* Somme de la première diagonale*/
    int diag2_sum = 0; /* Somme de la deuxième diagonale*/

    for (i = 0; i < size; i++) 
    {
        diag1_sum += a[i * size + i]; /* Éléments de la première diagonale (ligne = colonne)*/
        diag2_sum += a[i * size + (size - 1 - i)]; /* Éléments de la deuxième diagonale (ligne + colonne = size - 1)*/
    }

    printf(" %d\n", diag1_sum);
    printf(" %d\n", diag2_sum);
}
