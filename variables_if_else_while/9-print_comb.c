#include <stdio.h>

/**
 * main function: prints all possible combination of single digit numbers
 * Return 0
 */

int main()
{
	int i;

	for (i = 0; i < 10; i++) {
		putchar(i + '0'); /* Affiche le chiffre actuel */
		
	if (i < 9) {
		putchar(','); /* Ajoute virgule */
		putchar(' '); /* Ajpute espace */
	}

	}

	putchar('\n');

	return 0;
}
