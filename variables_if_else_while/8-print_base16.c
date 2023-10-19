#include <stdio.h>

/**
 * main function : prints all the numbers of base 16 in lowercase
 * Return:0 in success
 */

int main()
{
	int i;

	for(i = 0; i < 16; i++)
	{
	if(i < 10)
	{
		putchar('0' + i); /* print les chiffres de 0 à 9 */
	}else{
		putchar('A' + (i - 10)); /* les lettres de A à F */
	     }
	}
	
	putchar('\n');

	return 0;
}
