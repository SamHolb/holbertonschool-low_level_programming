#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function assign a random number to the variable n
 * Return: if success return 0
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	return (0);
}