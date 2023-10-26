#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int j = 0;/* va calculer la long*/
	int k;

	while (str[j] != '\0') /*on compte la long de la chaine*/
	{
	j++;
	}
	if (j % 2 == 1)/*determine si long pair ou impair*/
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}

	for (; k < j; k++)/*affiche la seconde moitie*/
	{
	_putchar(str[k]);
	}
	_putchar('\n');

}
