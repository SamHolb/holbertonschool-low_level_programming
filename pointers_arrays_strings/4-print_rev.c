#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */

void print_rev(char *s)

{
	int c = 0; /* initialise le compteur */ 

	while (s[c] != '\0') /* parcourt la string pour compter le nb de char*/ 
	{
	c++;
	}

	for (c -= 1; c >= 0; c--) /* parcourt la chaine en ordre inverse */
	{
	_putchar(s[c]); /* afiche le caractere */ 
	}
	_putchar('\n');
}
