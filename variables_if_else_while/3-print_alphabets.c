#include <stdio.h>

/**
 * main: prints alphabet in lower and uppercase
 * Return: 0 success
 */

int main() 
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++) {
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++) {
		putchar(c);
	}
	putchar('\n');
	return (0);
}
