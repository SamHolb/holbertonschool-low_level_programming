#include <stdio.h>

/**
 * main: prints aphabet in lowercase except q and e
 *
 * Return: 0 on success
 */

int main()
{
	char c;

	for (c = 'a'; c <= 'z'; c++) {
		if (c != 'e' && c != 'q') {
		       putchar(c);
		}
	}
	putchar('\n');

	return(0);
}	
