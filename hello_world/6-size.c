#include <stdio.h>

/*
 *main ** function that print the size of various types
 return 0
 */

int main()
{
	printf("Size of a char = %2d bytes \n", sizeof(char));
	printf("Size of a int = %2d bytes \n", sizeof(int));
	printf("Size of a long int = %2d bytes \n", sizeof(long int));
	printf("Size of a long long int = %2d bytes \n", sizeof(long long int));
	printf("Size of a float = %2d bytes \n", sizeof(float));
	return (0);
}
