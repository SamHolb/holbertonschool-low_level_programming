#include <stdio.h>

/**
 *main ** function that print the size of various types
 *return 0 success
 */

int main(void)
{ 
	char c;
	int i;
	long int l;
	long long int o;
	float f;

	printf("Size of a char: %lu byte(s) \n", (unsigned long) sizeof(c));
	printf("Size of a int: %d byte(s) \n", (unsigned long) sizeof(i));
	printf("Size of a long int: %d byte(s) \n", (unsigned long) sizeof(l));
	printf("Size of a long long int: %d byte(s) \n", (unsigned long) sizeof(o));
	printf("Size of a float: %d byte(s) \n", (unsigned long) sizeof(f));
	return (0);
}
